#include <iostream> 
using namespace std; 

int main() {
    int n = 10; // n 儲存了 1。
    int *p1 = &n; // n 的位址 0x61feb8，指定給 p1 儲存。
    int **p2 = &p1; // 而 p1 的位址是 0x61feb4，指定給 p2 儲存。

    cout << "n 位址：" << p1 << endl
         << "p1 位址：" << p2 << endl; 

    // 二維陣列，必須宣告每段一維陣列的維度
    int arr[2][3] = {{10, 20, 30}, {40, 50, 60}}; 
    int (*p3)[3] = arr;

    // 三維陣列，必須宣告每段二維陣列的維度
    int arr_1[1][2][3] = {{{10, 20, 30}, {40, 50, 60}}}; 
    int (*p4)[2][3] = arr_1;

    // 不想理會型態宣告的語法，使用 auto 是比較方便。
    int arr_2[2][3] = {{10, 20, 30}, {40, 50, 60}}; 
    auto p5 = arr_2;

    int arr_3[1][2][3] = {{{10, 20, 30}, {40, 50, 60}}}; 
    auto p6 = arr_3;

    return 0; 
} 