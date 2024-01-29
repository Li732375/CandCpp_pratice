#include <iostream>
#include <string.h>
using namespace std;

class MyString {
public:
    // 考慮 s1 的寫法讓人容易誤會，跟 s4 很像，為了不讓開發者混淆，
    // 想避免這樣的隱式轉換 (implicit conversion) ，
    // 於是在建構式 MyString(int n) 前加上 explicit。
    explicit MyString(int n) { // allocate n bytes to the MyString object
        data = new char[n];
        cout << "MyString(int n)\n";
    }

    MyString(const char *p) { // initializes object with char *p
        int len = strlen(p);
        data = new char[len+1];
        strcpy(data, p);
        cout << "MyString(const char *p), data = " << data << "\n";
    }

    // 解構式，暫與本主題無關
    ~MyString() {
        delete[] data;
    }
private:
    char *data;
};

int main() { 
    //MyString s1 = 10; // error: invalid conversion from 'int' to 'const char*' [-fpermissive]
    MyString s2(10);
    MyString s3 = "hello world";
    MyString s4("123456");
    return 0;
}