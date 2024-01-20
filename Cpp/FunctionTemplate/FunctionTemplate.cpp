#include <iostream>
using namespace std;

// 撰寫相同演算流程的函式，雖然參數型態不同，然而物件的協定相同。
/*
bool greaterThan(int a, int b) {
    return a > b;
}

bool greaterThan(string a, string b) {
    return a > b;
}
*/

// 希望參數的型態也可以參數化？也就是 a、b 的型態可以在呼叫時指定，
// 而不是如上寫死了兩個版本，這時就可以使用函式模版。
template <typename T> // typename 定義了一個模版參數 T。
// T 在這裡僅僅是參數名稱。
// 若有多個模版參數，各自都要使用 typename 來定義，每個模版參數以逗號區隔。

// 建立一個模版實例的意思是，編譯器推斷出 T 的型態，
// 產生並編譯了一個對應版本，這就是之所以名為模版的
// 原因，也就是說編譯器以你定義的模版為基礎。

// greaterThan 是個函式模版（function template），
// 或稱為泛型函式（generic function）。
bool greaterThan(T a, T b){
    return a > b;
}

// 如果有某個版本，不想要編譯器建立，而想要自行實作
template <>
bool greaterThan(string s1, string s2) {
    return s1.size() > s2.size();
}

template <>
bool greaterThan(double a, double b) {
    // 除非計算結果為 0 則 False，否則皆為 True
    return a + b;
}

int main(void){
    // 建立了一個模版的實例（instance）。
    cout << greaterThan(10, 20) << endl;
    // 相當於 greaterThan<int> (10, 20)。

    // 修改原先未改寫的話是比較字串序位，改寫成比較字串長度
    cout << greaterThan(string("xyz"), string("abc")) << endl;

    cout << greaterThan(0.2, 0.3) << endl;
    cout << greaterThan(0.0, 0.0) << endl;

    return 0;
}