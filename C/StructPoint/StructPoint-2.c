#include <stdio.h>

typedef const char* String;

// 結構中允許再定義結構
typedef struct {  
    struct {
        String id;  
        String name; 
        double balance;
    } acct; // 這裡有變數 acct，內部子變數需間接取得
    double overdraftlimit;

} CheckingAccount;

int main() { 
    // 宣告變數時需配合結構寫上兩層
    CheckingAccount checking = {
        .acct = {"243-175-689", "Pikachu", -1},
        .overdraftlimit = 30000
    };

    printf("%s\n", checking.acct.id); // 要透過變數 acct 一層才能取得
    printf("%s\n", checking.acct.name);
    printf("%f\n", checking.acct.balance);
    printf("%.2f\n", checking.overdraftlimit);

    return 0; 
} 