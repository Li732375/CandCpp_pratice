#include <iostream> 
using namespace std; 

// C++ 支援函式重載（Overload），為類似功能的函式提供了統一名稱，
// 然而根據參數列個數或型態的不同，由編譯器選擇要呼叫的函式。
void foo(int); 
void foo(int, int); 
void foo(double); 
// 重載時可以根據參數資料型態，也可以根據參數的個數，
// 或是兩者的結合，不過傳回型態不能作為重載的依據。


int main() { 
    foo(10); 
    foo(20, 30); 
    foo(10.0); 

    return 0; 
} 

void foo(int x) { 
    cout << "引數：" << x << endl; 
} 

void foo(int x, int y) { 
    cout << "引數：" << x << " " << y << endl; 
}

void foo(double x) { 
    cout << "double 引數：" << x << endl; 
} 