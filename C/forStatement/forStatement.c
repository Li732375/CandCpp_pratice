#include <stdio.h>

int main(void) {
    // 如果陳述句只有一個，也就是非複合陳述句，
    // {} 可以省略不寫，不過基於可讀性，還是建
    // 議加上；for 迴圈的第一個初始變數陳述句
    // 只會執行一次，之後每次重新進行迴圈時，
    // 都會根據判斷式來判斷是否執行下一個迴圈，
    // 而每次執行完迴圈之後，都會執行遞增式一次。
    for(int j = 1; j < 10; j++) {
        // 事實上，for 迴圈的語法其實只是將三個複合陳述區塊
        // 寫在一個括號中而已，所不同的是第一個陳述區塊只會
        // 執行一次，第二個陳述區塊專司判斷，而第三個陳述區
        // 塊只是一般的陳述句，而不一定只放遞增運算式。
        for(int i = 2; i < 10; i++) {
            printf("%d*%d=%2d ", i, j, i * j);
        }
        puts("");
    }
    printf("\n\n");

    // 括號中的每個陳述區塊是以分號（;）作區隔，
    // 而在一個陳述區塊中若想寫兩個以上的陳述句，
    // 則使用逗號（,）作區隔。
    for (int i = 2, j = 1; j < 10; i == 9 ? i = (++j/j) + 1 : i++) {
        printf("%d*%d=%2d%c", i, j, i * j, i == 9 ? '\n' : ' ');
    }
    printf("\n");

    int k = 0;
    k++;
    printf("%d / %d = %d\n", k, k, (k/k));

    return 0;
}