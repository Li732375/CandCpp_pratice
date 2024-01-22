#include <iostream> 
using namespace std; 

void foo(int); 
int foo(int, int);

int main() { 
    // 因此在指定重載函式時，雖然具有相同名稱，
    // 依函式指標的型態不同，編譯器會選擇對應的重載函式。
    void (*fp)(int) = foo; 
    int (*add)(int, int) = foo; 

    foo(10);                                  // 顯示 10
    cout << "1 + 2 = " << add(1, 2) << endl;  // 顯示 1 + 2 = 3

    // 傳遞函式時多半使用函式指標，不過也可以建立函式參考。
    void (&fr)(int) = foo; 

    foo(10);  // 顯示 10
    fr(20);   // 顯示 20

    return 0; 
} 

void foo(int n) { 
    cout << "n = " << n << endl; 
}

int foo(int a, int b) { 
    return a + b;
}