#include <iostream> 
using namespace std; 

// 如果引數的個數無法事先確定，而且引數的型態可能各不相同，
// C++ 11 以後可以透過可變參數模版（variadic template）來
// 解決。
template <typename... Types> // "..." 真的是省略語法，不是什麼懶得打的內容（因為數量未知嘛）
// Types 在這裡僅僅是個名稱而已，不是什麼關鍵字。
// Types 被稱為模版參數包（template parameter pack）。
// 代表不定長度的 typename T1, typename T2 等等。

void foo(Types... params) {
    // params 在這裡僅僅是個名稱而已，不是什麼關鍵字。
    // params 被稱為函式參數包（function parameter pack）。
    // Types... params 代表了不定長度的 T1 t1, T2 t2 等等。
    // params 並不是個物件。

    // 使用 sizeof... 來得知實際呼叫時的型態數量或引數數量，
    // 這個值是從編譯時期推斷得知。
    cout << sizeof...(Types) << " "
         << sizeof...(params) << endl;
}

int main() { 
    foo(1);             // 顯示 1 1
    foo(1, "XD");       // 顯示 2 2
    foo(1, "XD", 3.14); // 顯示 3 3

    return 0; 
}