#include <stdio.h>

// #define 只是"文字上"的替代，因此要小心項目展開後計算先後順序的問題。
#define pow(a) a * a

// 可以在定義巨集時，將輸入項目加上括號。
#define pow_1(a) (a) * (a)

int main(void) {
    // 實際展開後內容，詳見同名的 .i 檔的最底
    int x = 10;

    printf("%d\n", pow(x));     
    printf("%d\n", pow(x + x)); // 預期結果應該是 400，實際上顯示會是 120。
    // 因為展開後會是 x + x * x + x。
    
    printf("%d\n", pow_1(x));     
    printf("%d\n", pow_1(x + x));

    // 別在巨集中重複使用輸入項目。
    printf("%d\n", pow_1(x++)); // 預期結果應該是 100，實際上顯示會是 110。
    // 因為會被展開為 (x++) * (x++)。

    return 0;
}