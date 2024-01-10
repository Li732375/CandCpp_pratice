#include <stdio.h>

// 未加上大括號導致的編譯錯誤
#define swap(a, b)  \
    int temp = a;   \
    a = b;          \
    b = temp;       \

int main(void) {
    int x = 10;
    int y = 20;

    printf("%d %d\n", x, y);

    // 會因為字面上展開之後，沒有以大括號切出範圍導致編譯錯誤。
    // 實際展開後內容，詳見同名的 .i 檔的最底
    if(x > y) 
        swap(x, y) // 實際上僅第 5 行的有效，6、7 失效。

    printf("%d %d\n", x, y);

    return 0;
}