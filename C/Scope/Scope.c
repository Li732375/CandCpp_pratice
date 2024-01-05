#include <stdio.h>

// 全域變數是指直接宣告在（主）函式之外的變數，這個變數在整個程式之中都可見。
const double PI = 3.14159; // 全域變數

void count();

int main(void){
    // 全域變數最好只用來定義一些常數，或者是確實具有全域概念的變數，不應為了方
    // 便而草率地將變數設為全域變數，否則會發生名稱空間重疊等問題；全域變數的生
    // 命週期始於程式開始，終止於程式結束。

    // 區域變數是指函式中宣告的變數，或是宣告在參數列的參數，範圍只在函式之內。

    // 區塊變數是指宣告在某陳述區塊中的變數。
    // 如 while 迴圈區塊，或是 for 迴圈區塊。
    for (int i = 0; i < 3; i++){// 區塊變數 i 在迴圈結束之後，就不再有效。
        printf("變數 i 的數值為 %d\n", i);
    }

    // 範圍大的變數與範圍小的變數同名狀況時，範圍小的變數會暫時
    // 遮蔽（shadow）範圍大的變數，稱為變數遮蔽。
    int j = 5;
    for(int j = 0; j < 4; j++){// 區塊變數 j 在迴圈結束之後，就不再有效。 
        printf("因變數遮蔽，變數 j 的數值暫時為 %d\n", j * -1);
    }
    printf("因變數遮蔽結束，變數 j 的數值回歸 %d\n", j);


    for(int i = 0; i < 5; i++) {// 區塊變數 i 在迴圈結束之後，就不再有效。 
        count(); 
    }

    return 0;
}

// 雖然變數 c 是在 count 函式宣告，但是函式結束後，變數仍然有效，
// 直到程式執行結束時才消失，雖然變數一直存在，但由於範圍限於函式
// 之中，函式外仍無法存取該變數。
void count() { 
    static int c = 1; // 區域變數

    printf("%d\n", c); 
    c++; 
}