#include <stdio.h>

// 若標頭檔案與含入標頭檔的文件在同一個目錄下，那麼就使用雙引號 "" 來包括
// 標頭檔案名稱，如果是標準或專案專屬的標頭檔，例如 C 的標準標頭檔，那麼
// 則使用角括號 <> 來括住，編譯器在尋找時就會從設定的目錄中開始尋找。
#include "math.h"

int main(){
    // 函式的組成主要包括四個部份：返回值、函式名稱、參數列與函式主體。
    // 前三者稱為函式宣告或函式原型（Function prototype）。
    
    // C 語言規定，如果函式是在 main 之後實作，
    // 必須在 main 之前進行宣告，否則會出現編譯錯誤。

    // 函式原型定義了函式的外觀，通常定義在獨立的標頭檔，
    // 而被含入每個想呼叫函式的檔案中。

    // 在 C 中如果呼叫函式不傳回任何值，則宣告為 void。
    // 若不傳入任何引數，則參數列保持空白即可，也可以使用 void 來加以註明。
    // 標頭檔案被儲存為 .h 檔案，接著可以根據函式原型來實作函式主體。

    int num = 0;
    int p = 0;

    printf("輸入數值：");
    scanf("%d", &num);

    printf("輸入平方：");
    scanf("%d", &p);

    printf("%d 平方：%d\n", num, power2(num));
    printf("%d 的 %d 次方 %d\n", num, p, power(num, p));


    return 0;
}

// How to use (in this example)?

// 1.
// in terminal, input command "gcc math.c FunctionABC.c".
// generated a.exe(or a.out).
// execute a.exe(or a.out).

// 2.
// in terminal, input command "gcc -c math.c FunctionABC.c".
// generated math.o and FunctionABC.o in same folder.
// input command "gcc math.o FunctionABC.o".
// generated a.exe(or a.out).
// execute a.exe(or a.out).