#include <stdio.h>

// 使用 typedef，定義一個比較容易閱讀的名稱。
typedef const char* String; // 定義結構的別名，後面範例會提及。

// 有些資料會有相關性，相關聯的資料組織在一起，
// 對於資料本身的可用性或者是程式碼的可讀性，都
// 會有所幫助。

// 結構是一個包含有多個變數的資料集合，可用以
// 宣告變數 –-- 稱為結構體變數，進行相關的程
// 式處理。
struct Account { // 後續皆採用 struct Account 作為新資料型態的宣告。
    // 值域，每個變數（欄位）定義其實就是一個變數的宣告，不可包含初始值的給定。
    String id;
    String name;
    double balance;
};

// 也可以在函式中定義結構，直接宣告結構實例。
/*
struct Account { 
    String id;
    String name;
    double balance;
} acct_1 = {"789-456-123", "Lin", 101}, 
acct_2 = {"745-689-213", "Noton", 9};

// 非 typedef 開頭，acct_1 and acct_2 為變數。
*/

void printAcct(struct Account acct) {
    printf("Account(%s, %s, %.2f)\n", acct.id, acct.name, acct.balance);
}


int main(void){
    // 結構的名稱型態包含 struct 這個名稱。
    struct Account acct; // struct Account acct 建立了 Account 的實例。

    // 存取實例的值域時可以使用 dot 運算子「.」。
    acct.id = "123-456-789";
    acct.name = "Justin Lin";
    acct.balance = 1000;

    // 結果會不可預期，如果沒有指定值域的初值也是如此。
    // 可以如下指定每個值域的初值。
    struct Account acct_1 = {"456-123-789", "Tin Lin", 100};

    // 也可以使用成員名稱，不一定要按照成員名稱的定義順序來指定。
    struct Account acct_2 = {.balance = 10, .id = "789-123-456",
     .name = "Tom Lee"};

    // 若要宣告結構陣列並初始每個結構成員。
    struct Account accts_3 [] = {
        {"163-285-749", "Jhon", 170}, 
        {"789-654-321", "Monica Huang", 105} 
    };

    // 顯示 Account(123-456-789, Justin Lin, 1000.00)
    printAcct(acct);
    // acct 在函式執行完畢後就會自動清除。
    printAcct(acct_1);
    printAcct(acct_2);

    // 顯示結構陣列
    for(int i = 0; i < 2; i++){
        printAcct(accts_3[i]);
    }

    return 0;
}