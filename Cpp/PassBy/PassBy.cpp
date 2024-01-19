#include <iostream>
using namespace std;

void foo(char *s){
    cout << s << "\n";
}

void foo_1(int *a){
    cout << a << "\n";
    cout << *a << "\n";
}

int foo(int &a){
    return a + 1;
}

int foo_2(const int &a){
    return a + 2;
}

// C++ 11 開始可以使用 rvalue 參考，參數也可以宣告 rvalue 參考。

// 當兩個函式各定義了 rvalue 參考與 const 的 lvalue 參考作為參數，
// 使用常量呼叫時，編譯器會選擇 rvalue 參考的版本。
int foo_3(int &&a){
    return a + 3;
}

int main(void){
    // 參數以 rvalue 參考宣告的情況，主要考慮的是效率，
    // 在函式內容的實作上往往也就有別於 const 的 lvalue 
    // 參考之版本。
    char name[] = "Justin";
    foo(name);

    int h[] = {10, 20, 30, 40, 50};
    foo_1(h);

    //傳參考實不可使用字面常量
    int n = 10;
    int n1 = foo(n);
    //foo(10); // error: cannot bind non-const lvalue reference of type 'int&' to an rvalue of type 'int'
    cout << "n1 " << n1 << "\n";

    int n2 = foo_2(n);
    int n3 = foo_2(10); // OK
    cout << "n2 " << n2 << "\n";
    cout << "n3 " << n3 << "\n";

    return 0;
}