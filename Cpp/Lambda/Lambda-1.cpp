#include <iostream> 

// 要定義一個函式可以接受 lambda 運算式，參數無法使用 auto，
// 怎麼辦呢？可以包含 functional 標頭檔，使用 function 來宣
// 告，function 的實例可以接受 Callable 物件，lambda 運算式
// 是其中之一。
#include <functional>
using namespace std; 

// 定義模版（template）時，lambda 運算式也可以模版化。
template <typename T>
function<T(T)> negate_all(T t1) {
    return [=](T t2) -> T {
        return t1 + t2;
    };
}

int main() { 
    // lambda 運算式建立之後也可以馬上呼叫。
    // 顯示 Hello, Justin
    [](const char *name) {
        cout << "Hello, " << name << endl;
    }("Justin");

    // 函式的參數型態不能以 auto 宣告，然而在 C++ 14，
    // lambda 運算式的參數型態可以是 auto。
    auto plus = [] (auto a, auto b) {
        return a + b;
    };

    // 指定給 plus 的 lambda 運算式，稱為泛型 lambda（generic lambda），
    // 原理是基於模版，引數型態只要符合本體中的實作協定就可以用來呼叫 
    // lambda 運算式，在上例中就是引數要能使用 + 運算子處理。
    
    // 顯示 3
    cout << plus(1, 2) << endl; 

    // 顯示 abcxyz
    cout << plus(string("abc"), string("xyz")) << endl;

    return 0; 
} 