#include <iostream>
using namespace std;

template <typename T>
class Foo;

template <typename T>
void foo(Foo<T> t);

template <typename T>
class Foo {
    T t;

    // friend 與類別之間有耦合關係，因此必須事先做好宣告，宣告 friend 時才看得到彼此。
    public:
        Foo(T t) :t(t) {}
        friend void foo<T>(Foo<T> t);
    };

template <typename T>
void foo(Foo<T> f) {
    cout << f.t << endl;
}

int main() {
    // 實例後的類別型態與朋友之間的型態是對應的，例如 Foo<int> 與 
    // void foo(Foo<int>) 才會是朋友，與 void foo(Foo<char>) 
    // 不會是朋友。
    Foo<int> f(10);
    foo(f);

    return 0;
}