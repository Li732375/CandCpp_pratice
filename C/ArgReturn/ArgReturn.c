#include <stdio.h>

int increment(int n);

int main(){
    // 引數傳遞是傳送值給函式上對應的參數，值會複製一份給參數，
    // 來源變數與接受的參數各有一個記憶體位址，互不相干。

    int x = 10;

    printf("函式內的 x 值 %d\n", increment(x));
    printf("宣告的 x 值 %d\n", x);

    return 0;
}

int increment(int n) { 
    n = n + 1; 
    return n; 
}