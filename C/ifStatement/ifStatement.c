#include <stdio.h>

int main(void) {
    int input = 0;
    int remain = 0;

    printf("輸入整數：");
    scanf("%d", &input);

    remain = input % 2;
    // 當條件式成立時（真），則執行陳述句一，
    // 要不然就執行陳述句二；如果條件式不成立
    // 時並不想作任何事，則 else 可以省略。

    // 寫法一
    // if 或 else 中只有一個陳述句的時候，可以不寫 {}，
    // 不過，現在鼓勵也是加上 {}，這有助於可讀性，也有助
    // 於避免縮排上造成的程式碼閱讀誤解。
    /*
    if (條件式) 
        陳述句一; 
    else 
        陳述句二;
    */

    // 寫法二
    // 在 if 後如果有兩個以上陳述句，
    // 稱之為複合陳述句（compound statement），
    // 此時你必須使用 {} 將複合陳述句包括起來。
    /*
    if (條件式) { 
        陳述句一; 
        陳述句二; 
    } 
    else { 
        陳述句三; 
        陳述句四; 
    }
    */
   
    if(remain == 1) {
        printf("%d 為奇數\n", input);
    }
    else {
        printf("%d 為偶數\n", input);
    }

    return 0;
}