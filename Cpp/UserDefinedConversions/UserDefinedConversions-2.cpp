#include <iostream>
using namespace std;

// 與同系列的 -3.cpp 比較
class MyString {
public:
    MyString(int n) { // allocate n bytes to the MyString object
        cout << "MyString(int n)\n";
    }

    MyString(const char *p) { // initializes object with char *p
        cout << "MyString(const char *p)\n";
    }
};

int main() {
    // 允許顯示轉換（explicit conversion）
    MyString s1 = 10;
    MyString s2(10);
    MyString s3 = "hello world";
    MyString s4("123456");
    return 0;
}