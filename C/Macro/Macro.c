// 前置處理器語言，顧名思義，並不是 C 語言的一部份，
// 而是編譯過程中前置處理部份處理的簡單語言。

// #include 是前置處理器的原始碼含括指令，
// 表示將含括的檔案插入目前原始碼之中。
#include <stdio.h>

// 本質上是個"字（字面）形式"上的取代（或說為擴展、展開）。
#define LEN 10 

// 也常用來定義一個模版，以取代經常撰寫的程式片段。
// 內容跨越多行時，每行結尾必須使用。
#define swap(a, b) { \ 
    int temp = a;    \
    a = b;           \
    b = temp;        \
} // 實際上那對大括號只是定義了陳述句區塊，
// 而不是函式區塊。即便不加上大括號，結果仍
// 然正確，不過 main 範疇中多了個 temp 變
// 數，也就是說，如果同一範疇內也有 temp 
// 變數，編譯就會失敗。

int main(void) {
    // 實際展開後內容，詳見同名的 .i 檔的最底
    printf("Hello! World!\n");
    printf("哈囉！C 語言！\n\n");

    // 被定義的內容稱為巨集（Macro），gcc 編譯時指定 -E
    int arr[LEN]; // LEN 在 .i 檔會被展開為 10
    printf("*(&arr + 1) - arr = %d\n\n", *(&arr + 1) - arr);

    int x = 10;
    int y = 20;

    printf("%d %d\n", x, y);
    swap(x, y) // 可以在 swap(x, y) 之後加上分號
    printf("%d %d\n\n", x, y);

    return 0;
}