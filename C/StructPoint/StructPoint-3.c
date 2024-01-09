#include <stdio.h>

typedef const char* String;

// 結構中允許再定義結構
typedef struct {  
    struct { // 若這裡未取名，即匿名結構，成員會被視為外包結構的成員
        String id;  
        String name; 
        double balance;
    }; // 這裡沒有變數，內部子變數就可以直接取得
    double overdraftlimit;

} CheckingAccount;

int main() { 
    // 宣告變數時需配合結構寫上兩層
    CheckingAccount checking = {
        {"243-175-689", "Pikachu", -1},
        .overdraftlimit = 30000
    };

    printf("%s\n", checking.id); // 要透過變數 acct 一層才能取得
    printf("%s\n", checking.name);
    printf("%f\n", checking.balance);
    printf("%.2f\n\n", checking.overdraftlimit);

    // 直接設定
    CheckingAccount checking_1 = {
        "273-584-619", "Pikonchu", -2,
        .overdraftlimit = 600
    };

    printf("%s\n", checking_1.id); // 直接取得
    printf("%s\n", checking_1.name);
    printf("%4.f\n", checking_1.balance);
    printf("%.2f\n\n", checking_1.overdraftlimit);

    return 0; 
} 