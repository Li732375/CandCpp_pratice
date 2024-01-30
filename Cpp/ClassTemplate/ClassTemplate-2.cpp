#include <iostream>
using namespace std;

template <typename T>
class Foo {
    //  static 資料成員是在類別外指定，記得範圍解析時也得加上型態參數，
    // 而使用 static 成員時，必須實例化，即使實例化時指定的型態與 static 
    // 無關，也是得實例化。
    static int wat;
    
    public:
        static int wat10(); 
};

template <typename T>
int Foo<T>::wat = 10; 

template<typename T>
int Foo<T>::wat10() {
    return wat * 10;
}

int main() {
    cout << Foo<double>::wat10() << endl;
    return 0;
}