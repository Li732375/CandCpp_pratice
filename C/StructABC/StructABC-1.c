#include <stdio.h>

// 使用 typedef，定義一個比較容易閱讀的名稱。
typedef const char* String; // 定義結構的別名。

// 注意這裡
// 使用 typedef 定義結構的別名，如此一來，
// 宣告並產生實例時，就不用再寫 struct 關
// 鍵字。
typedef struct Account { 
    String id;
    String name;
    double balance;
} Account; 
// 近一步使用細節見 StructPoint.c。

// 以下的範例定義的結構型態為 struct <anonymous>，
// 也就是匿名結構，並以 typedef 取這個匿名結構取了
// 個別名。
/*
typedef struct { // 這裡的 "Account" 不見了 
    String id;
    String name;
    double balance;
} Account; // 有 typedef 開頭，為結構別名
*/

// 結構的名稱型態"無需"包含 struct 名稱。
void printAcct(Account acct) {
    printf("Account(%s, %s, %.2f)\n", acct.id, acct.name, acct.balance);
}

int main(void){
    // 結構的名稱型態"無需"包含 struct 名稱。
    Account acct; // 建立 Account 的實例。

    acct.id = "123-456-789";
    acct.name = "Justin Lin";
    acct.balance = 1000;

    // 結構的名稱型態"無需"包含 struct 名稱。
    Account acct_1 = {"456-123-789", "Tin Lin", 100};

    // 結構的名稱型態"無需"包含 struct 名稱。
    Account acct_2 = {.balance = 10, .id = "789-123-456",
     .name = "Tom Lee"};

    // 結構的名稱型態"無需"包含 struct 名稱。
    Account accts_3 [] = {
        {"183-452-769", "Justin Lin", 80}, 
        {"789-654-321", "Monica Huang", 135} 
    };

    printAcct(acct);
    printAcct(acct_1);
    printAcct(acct_2);

    for(int i = 0; i < 2; i++){
        printAcct(accts_3[i]);
    }


    return 0;
}