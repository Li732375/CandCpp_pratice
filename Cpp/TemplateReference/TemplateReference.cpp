#include <iostream> 
using namespace std; 

void foo(int &p) {
    p = 10;
}

// 因為 some(x) 的呼叫，編譯器建立了 some(int) 的版本，
// 而不是 some(int&)，因此結果會顯示 5。
template <typename T>
void some(T t) {
    foo(t);
}

// 改成建立兩個 some 模版的重載
template <typename T>
void some_1(T &t) {
    foo(t);
}

template <typename T>
void some_1(const T &t) {
    foo(t);
}
// 重載雖然可以解決需求，只不過，模版的實作內容一模一樣，這樣似乎失去了模版的意義。

// 嗯？呼叫 some(10) 時，10 是個 rvalue，因此 T&& 可以接受，
// 這部份沒問題，可是 some(x)？x 不是個 lvalue 嗎？怎麼行得通？
template <typename T>
// 這邊其實是 C++ 語言中的一個特例，如果將 lvalue 
// 傳給模版函式的 T&& 參數的話，T 會被推斷為 int&，
// 也就是說編譯器首先會為 some(x) 建立 some(int& &&) 版本！
void some_1(T &&t) {
    foo(t);
}

/*
對於一個模版參數 t，編譯器推斷出型態後，會依以下情況收合：

1. X& &、X& &&、X&& & 都會收合為 X&，也就是 lvalue 參考
2. X&& && 收合為 X&&，也就是 rvalue 參考

因此方才的 int& && 就收合為 int& 了，也就是個 lvalue 參考，編譯就通過了
*/

int main() {
    int x = 5;

    some(x);

    // 無法使用 some(10) 這種呼叫了，因為 10 是個 rvalue。
    some(10); // 紋風不動，完全沒變
    cout << x << endl;
    
    some_1(x);
    some_1(10); // 接受修改
    cout << x << endl;

    return 0; 
}