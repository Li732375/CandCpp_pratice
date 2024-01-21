#include <iostream> 

// 標頭檔中定義了 forward。
#include <utility>
using namespace std; 

void foo(int &&p) {
    //...
}

/*
template <typename T>
void some(T &&t) {
    foo(t);  // error: cannot bind rvalue reference of type 'int&&' to lvalue of type 'int'
}
*/

// t 的運算式來源明明就是個 rvalue，編譯器不能直接 rvalue 的性質轉給 foo 的 p ？
// 其實做得到，需要這樣做。
template <typename T>
void some(T &&t) {
    // std::forward 是在告訴編譯器，將呼叫時運算式來源的資訊轉給接收的那方。
    foo(std::forward<T>(t)); // 建議呼叫時使用 std::forward 以避免同名問題。
}
// 可以看成 std::forward 建立了一個管道，接通了 10 與 int &&p，
// 10 是個 rvalue，而 p 是個 rvalue 參考。

// 另一個例子
void r(int &p) {

}

void rr(int &&p) {

}

template <typename F, typename T>
void some_1(F f, T &&t) {
    f(std::forward<T>(t));
}

int main() {
    // 編譯器建立了個 some(int&&) 版本，因此呼叫 some(10) 沒問題，
    // 可是 t 是個 lvalue，而現在 foo 的 p 是個 rvalue 參考，因此編譯失敗。
    some(10);

    int x = 10;
    some_1(r, x); // 這裡傳進去的 r 是上面宣告的函式。
    // 這邊運用了傳遞函式，這之後就會說明，簡單來說，
    // 函式是可以傳遞的，在 some_1(r, x) 時，編譯器會
    // 建立 some_1(void (*f)(int&), int& && t) 的版
    // 本，也就是 T 被推斷為 int&，而後 int& &&t 
    // 會被收合為 int&，接著的 f(std::forward<T>(t))
    // 內容編譯器會建立為 f(std::forward<int&>(t))，
    // 也就是說，可以看成 x 與 int &p 之間建立了一個
    // 管道，因此可以通過編譯。
    
    some_1(rr, 10);
    // 編譯器會建立 some(void (*f)(int&&), int &&t) 的版本，
    // 接著的 f(std::forward<T>(t)) 內容編譯器會建立為 f(std::forward<int>(t))，
    // 也就是說，可以看成 10 與 int &&p 之間建立了一個管道，
    // 因此可以通過編譯。

    return 0; 
}