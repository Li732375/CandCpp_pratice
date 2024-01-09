#include <stdio.h>

typedef const char* String;

// 外包結構
typedef struct { // 匿名結構
    String id;  
    String name; 
    double balance;
} Account;

// 結構中允許再滲入過去已定義的外包結構
typedef struct { // 匿名結構
    Account; // 上面已定義的結構，不需欄位名稱
    double overdraftlimit;
} CheckingAccount;

// 進階範例
typedef struct CSNode{
    struct {
        data;
        };
    struct CSNode *firstchild, *rightchild;
}MyNode, CSTree;

// 意義等同如下
/*
struct CSNode{
    struct {
        data;
        };
    struct CSNode *firstchild, *rightchild;
}; // 定義結構

typedef struct CSNode MyNode; // 定義別名

MyNode CSTree; // 宣告變數 CSTree
*/

int main() { 
    CheckingAccount checking = {
        {"123-456-789", "Justin Lin", 1000},
        .overdraftlimit = 30000
    };

    printf("%s\n", checking.id); // 直接取得
    printf("%s\n", checking.name);
    printf("%f\n", checking.balance);
    printf("%f\n\n", checking.overdraftlimit);

    // 直接設定
    CheckingAccount checking_1 = {
        "293-47-6158", "Pikichu", -76,
        .overdraftlimit = 600
    };

    printf("%s\n", checking_1.id); // 直接取得
    printf("%s\n", checking_1.name);
    printf("%4.f\n", checking_1.balance);
    printf("%.2f\n\n", checking_1.overdraftlimit);


    return 0; 
} 