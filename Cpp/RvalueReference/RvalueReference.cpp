#include <iostream>
using namespace std;

int main(void){
    // 在 C++ 中，「物件」這個名詞，不單只是指類別的實例，而是指記憶體中的一塊資料。
    //int &r = 10; // error: cannot bind non-const lvalue reference of type 'int&' to an rvalue of type 'int'
    // 常量是記憶體中臨時的資料，無法對字面常量取址
    // 加上 const 的話倒是可以
    const int &r = 10; 

    // 雖然可以，但意義上是仿下面的流程
    /*
    const int _n = 10;
    const int &r = _n;
    */
    // r 並不是真的參考至 10，而是 10 被複製給 _n，
    // 然後 r 參考至 _n，如果不加上 const，那麼你可
    // 能會以為變更了 r，就是變更了 10 位址處的值，
    // 因此就要求你一定得加上 const，不讓改。

    // 再一個例子
    int a = 10;
    int b = 20;
    //int &r = a + b; // error: cannot bind non-const lvalue reference of type 'int&' to an rvalue of type 'int'
    
    const int &r_1 = a + b; // 若想通過編譯，必須加上 const。

    // 不過在 C++ 11 之後，像以上的運算式，可以直接參考。
    int &&rr = a + b; // int&& 是 rvalue 參考（rvalue reference）。
    int c = a + b; // 相對於將 a + b 的結果複製給 c，效率較差。
    // 特別是當 rvalue 運算式會產生龐大物件的時候，複製就會是個成本考量。

    // 以字串舉例
    // 如 s1、s2 若是個很長的 string。
    string s1 = "很長的字串內容1...";
    string s2 = "很長的字串內容2...";

    string result = s1 + s2; // 那麼 s1 + s2 的結果還會複製給目標 string。
    string &&result_1 = s1 + s2; // 改用以下會比較經濟
    
    // lvalue、rvalue 是 C++ 對運算式（expression）的分類方式，
    // 一個粗略的判別方式，是看看 & 可否對運算式取址，若可以的話，
    // 運算式是 lvalue，否則是個 rvalue。

    // 那麼 ++i、i++ 呢？
    int i = 10;

    // ++i 運算結果是遞增後的 i
    int &r_2 = ++i; // OK

    // i++ 運算結果是遞增前的 i，暫時性存在於記憶體，
    // 若不指定給變數的話就不見了。
    //int &r = i++; // error: cannot bind non-const lvalue reference of type 'int&' to an rvalue of type 'int'
    int &&rr_1 = i++; // OK

    // 哪些是 lvalue，而哪些又是 rvalue，基本上還是以〈Value categories〉
    // 的定義為準，不清楚的話就查一下。使用 rvalue 參考通常是為了效率上的考
    // 量。

    return 0;
}