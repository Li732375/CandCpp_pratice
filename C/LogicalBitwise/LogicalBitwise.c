#include <stdio.h>

int main(void) {
    // 邏輯運算子（Logical operator），分別為「且」（&&）、
    // 「或」（||）及「反相」（!）三個運算子。
    int num = 75;
    printf("%d\n", num > 70 && num < 80);
    printf("%d\n", num > 80 || num < 75);
    printf("%d\n\n", !(num > 80 || num < 75));
    
    // 位元運算子（Bitwise operator），數位設計上有 AND、OR、NOT、
    // XOR 與補數等運算，在 C 中提供這些運算的就是位元運算子，它們的
    // 對應分別是 AND （&）、OR（|）、NOT（!）、XOR（^）與補數（~）。
    puts("AND運算：");
    printf("0 AND 0\t\t%d\n", 0 & 0);
    printf("0 AND 1\t\t%d\n", 0 & 1);
    printf("1 AND 0\t\t%d\n", 1 & 0);
    printf("1 AND 1\t\t%d\n\n", 1 & 1);

    puts("OR運算：");
    printf("0 OR 0\t\t%d\n", 0 | 0);
    printf("0 OR 1\t\t%d\n", 0 | 1);
    printf("1 OR 0\t\t%d\n", 1 | 0);
    printf("1 OR 1\t\t%d\n\n", 1 | 1);

    puts("XOR運算：");
    printf("0 XOR 0\t\t%d\n", 0 ^ 0);
    printf("0 XOR 1\t\t%d\n", 0 ^ 1);
    printf("1 XOR 0\t\t%d\n", 1 ^ 0);
    printf("1 XOR 1\t\t%d\n\n", 1 ^ 1);

    puts("NOT運算：");
    printf("NOT 0\t\t%d\n", !0);
    printf("NOT 1\t\t%d\n\n", !1);

    char num_1 = 255;
    printf("num_1 = %d\n", num_1);
    printf("~num_1 = %d\n\n", ~num_1);

    // 邏輯運算子與位元運算子也是很常被混淆的，像是 && 為邏輯運算，
    // 而 & 為位元運算，|| 為邏輯運算，而 | 為位元運算。
    int input = 0;

    printf("輸入正整數：");
    scanf("%d", &input);

    printf("輸入為奇數？%c\n\n", input & 1 ? 'Y' : 'N');

    // 簡單的 XOR 字元加密。
    char ch = 'A';

    printf("before encoding：%c\n", ch);

    ch = ch ^ 0x7;
    printf("after encoding：%c\n", ch);

    ch = ch ^ 0x7;
    printf("decoding：%c\n\n", ch);

    // 左移（<<）與右移（>>）兩個運算子，
    // 左移運算子會將所有的位元往左移指定
    // 的位數，左邊被擠出去的位元會被丟棄
    // ，而右邊會補上 0；右移運算則是相反
    // ，會將所有的位元往右移指定的位數，
    // 右邊被擠出去的位元會被丟棄，至於左
    // 邊位元補 0 或補 1 則不一定，視系統
    // 而定。
    int num_2 = 1; 

    printf("2 的 0 次：%d\n", num_2);

    num_2 = num_2 << 1; 
    printf("2 的 1 次：%d\n", num_2);

    num_2 = num_2 << 1; 
    printf("2 的 2 次：%d\n", num_2);

    num_2 = num_2 << 1; 
    printf("2 的 3 次：%d\n\n", num_2);

    return 0;
}