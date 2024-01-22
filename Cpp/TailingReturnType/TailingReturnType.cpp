#include <iostream>
#include <vector>
using namespace std;

// 如果想在標頭檔宣告函式原型
/*
template <typename T>
auto addThese(T begin, T end);
*/
// 這樣不行，因為沒有程式碼上下文，auto 不能傳回型態

// 即便改成這樣也不行
/*
template <typename T>
decltype(*begin) addThese(T begin, T end);
*/

// 給 decltype 一個型別、值或運算式（expression），即可獲得該傳入的東西其型別。
// https://ithelp.ithome.com.tw/m/articles/10214680
/*
decltype(1.0 + 1) the_double = 0.0; 
// 上述程式碼中，變數 the_double 的型別是 double。利用傳入 decltype 的算式，
// 推導出型別為 double，並直接拿來定義變數。
*/

// 使用尾端傳回型態（tailing return type）
template <typename T>
// 沒有明確寫出回傳型別，而是利用 decltype 來明確定義適用的回傳型別。
auto addThese(T begin, T end) -> decltype(*begin + *end);

// 使用尾端傳回型態（tailing return type）
auto add(int a, int b) -> int; // 指定函式傳回型態為 int

int main() {
    vector<int> vt = {1, 2, 3};
    cout << addThese(vt.begin(), vt.end()) << endl;

    cout << add(4, 5) << endl;

    // 撰寫 C++ Template 程式碼時，由於型別不定，
    // 因此，欲印出算式的型別，可利用 typeid。
    auto type_name = typeid(decltype(1.0 + 1)).name(); // "double"

    cout << (string)type_name << endl;

    return 0;
}

template <typename T>
auto addThese(T begin, T end) -> decltype(*begin + *end) {
    auto r = *begin;
    for(auto it = begin + 1; it != end; it++) {
        r += *it;
    }
    return r;
}

// 尾端傳回型態並不是只能用在模版，有些偏好將函式傳回型態寫
// 在最後的開發者，會特意這麼撰寫函式。
auto add(int a, int b) -> int {
    return a + b;
}