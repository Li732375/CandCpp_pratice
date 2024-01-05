#include <stdio.h>
#include "show_a.h"

int main(void){
    // 假如今天我們有一個變數要在多個檔案之間共用，該怎麼處理?
    // 這就是 extern 的作用。extern 告訴 compiler 這個變數的
    // 存在，但是並不是由這個這個檔案做宣告。
    ashow();
    printf("現在 a 的值為 %d\n", a);

    //extern int a = 5; // [error]: `v' has both `extern' and initializer
    //int a = 8; // 試著註解該行並編譯執行看看，檢視效果差異。
    a = 7; // 無須交代變數資料型態，直接複寫原先在 show_a.c 的 a。
    ashow();
    printf("現在 a 的值為 %d\n", a);

    return 0;
}