#include <stdio.h>
#include <stdlib.h>

typedef const char* String;

// 範例的 withdraw、deposit 等函式，都是服務於 Account，若想要的話，
// 也可以令函式成為結構的成員之一，有點物件導向語言裡，物件與方法的概
// 念。
typedef struct Account { // 大括號範圍的名稱（結構名稱）
    String id;  
    String name; 
    double balance;

    char *_to_str;

    // 宣告資料型態就好，免除變數名稱
    void (*deposit)(struct Account*, double); // 結構下的函式
    void (*withdraw)(struct Account*, double); // 結構下的函式
    String (*to_str)(struct Account*);
} Account; // 有 typedef 開頭，為結構別名

void deposit(Account *acct, double amount) {
    if(amount <= 0) {
        puts("必須存入正數");
        return;
    }
    acct->balance += amount;
}

void withdraw(Account *acct, double amount) {
    if(amount > acct->balance) {
        puts("餘額不足");
        return;
    }
    acct->balance -= amount;
}

String to_str(Account *acct) {
    int n = snprintf(NULL, 0, "Account(%s, %s, %f)", 
        acct->id, acct->name, acct->balance
    );

    if(acct->_to_str != NULL) {
        free(acct->to_str);
    }

    acct->_to_str = malloc((n + 1) * sizeof(char));
    snprintf(acct->_to_str, n + 1, "Account(%s, %s, %f)", 
        acct->id, acct->name, acct->balance
    );

    return acct->_to_str;
}

Account* new_account(String id, String name, double balance) {
    Account *acct = (Account*) malloc(sizeof(Account));
    acct->id = id;
    acct->name = name;
    acct->balance = balance;
    acct->_to_str = NULL;

    acct->deposit = deposit;
    acct->withdraw = withdraw;
    acct->to_str = to_str;
    return acct;
}

void del_account(Account *acct) {
    free(acct->_to_str);
    free(acct);
}

int main() { 
    Account *acct = new_account("5614-7238", "Jin", 187);
    acct->deposit(acct, 500);
    acct->withdraw(acct, 200);

    printf("%s\n", acct->to_str(acct));

    del_account(acct);


    return 0; 
} 