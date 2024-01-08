#include <stdio.h>

typedef const char *String;

// 以下兩種結構同樣意義（結合 typedef，定義 struct 也宣告 struct 別名）
// 寫法一
typedef struct { // 沒有寫 "Account" 無妨
    String id;
    String name;
    double balance;
} Account; // 有 typedef 開頭，為結構別名（可以的話，建議至少開頭大寫）

// 寫法二
/*
struct account{ // 先定義結構，名稱為 account
    String id;
    String name;
    double balance;
};

typedef struct account Account; // 結構別名（可以的話，建議至少開頭大寫）

*/
// 後續依然皆僅以 Account 作為資料型態宣告即可


// 在 StructABC 中示範的 printAcct 函式，參數直接以結構型態宣告，
// 指定結構實例作為引數時，還是會建立新的實例並複製各個值域。

// 如果不希望複製的行為發生，可以傳遞位址。
void deposit(Account *acct, double amount){
    if(amount <= 0){
        puts("必須存入正數");
        return;
    }

    // 如果使用結構宣告的指標來存取成員，必須使用 -> 運算子，
    // 因為傳遞的是結構實例的位址，函式中對實例的變更，就是對
    // 原結構實例的變更。
    acct->balance += amount;
}

// 如果不希望複製的行為發生，可以傳遞位址。
void withdraw(Account *acct, double amount){
    if (amount > acct -> balance){ 
        puts ( "餘額不足" );
        return ;
    }

    // 如果使用結構宣告的指標來存取成員，必須使用 -> 運算子，
    // 因為傳遞的是結構實例的位址，函式中對實例的變更，就是對
    // 原結構實例的變更。
    acct->balance -= amount;
}

int main(){
    Account acct_1 = {"456-123-789", "Tin Lin", 100};
    deposit(&acct_1, 500);
    withdraw(&acct_1, 200);

    printf("Accout(%s, %s, %.1f)\n", acct_1.id, acct_1.name, 
    acct_1.balance);


    return 0;
}