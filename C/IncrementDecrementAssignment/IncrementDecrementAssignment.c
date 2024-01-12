#include <stdio.h>

int main(void){
    // 將遞增或遞減運算子撰寫在變數之前或變數之後，
    // 但其實兩者是有差別的，將遞增（遞減）運算子撰
    // 寫在變數前時，表示先將變數的值加（減）1，然
    // 後再傳 回變數的值，將遞增（遞減）運算子撰寫
    // 在變數之後，表示先傳回變數值，然後再對變數加
    // （減）1。
    int i = 0;
    int num = 0;

    printf("\nnum\t i\n");

    num = ++i;   // 相當於i = i + 1; num = i;
    printf("%2d\t%2d\n", num, i);

    i = 0;
    num = --i;    // 相當於i = i - 1; num = i;
    printf("%2d\t%2d\n", num, i);

    i = 0;
    num = i++;    // 相當於num = i; i = i + 1;
    printf("%2d\t%2d\n", num, i);

    i = 0;
    num = i--;     // 相當於 num = i; i = i - 1;
    printf("%2d\t%2d\n", num, i);

    // 指定運算子（Assignment operator），到目前為止我們只看過一個指定運算子，
    // 也就是=這個運算子，事實上指定運算子還有以下的幾個：
    /*
    +=：a += b 就是 a = a + b
    -=：a -= b 就是 a = a - b
    *=：a *= b 就是 a = a * b
    /=：a /= b 就是 a = a / b
    %=：a %= b 就是 a = a % b
    &=：a &= b 就是 a = a & b
    |=：a |= b 就是 a = a | b
    ^=：a ^= b 就是 a = a ^ b
    <<=：a <<= b 就是 a = a << b
    >>=：a >>= b 就是 a = a >> b
    */


    return 0;
}