#include <stdio.h>

int increment(int *n);

int main(){
    // 在傳值應用上，也可以將變數的位址值取出，傳遞位址值給指定的指標參數，
    // 只要使用 & 運算子就可以了。

    int x = 10;

    printf("函式內的 x 值 %d\n", increment(&x));
    printf("宣告的 x 值 %d\n", x);

    // 在函式上宣告指標參數之目的，是希望函式中可以有變動同一位址的值，
    // 如此一來，呼叫者可以保留函式中變動的結果。

    // 運用的場景之一是，C 呼叫函式後只能傳回一個值，若在呼叫函式時，
    // 想取得兩個以上的運算結果，就可以使用指標參數。

    return 0;
}

// 如果函式不傳回值，使用 void 表示不傳回任何數值；若函式傳回型態不為 void，
// 在函式中一定要使用 return 傳回數值，否則編譯器會回報錯誤。
int increment(int *n) { 
    *n = *n + 1; 
    return *n; 
}