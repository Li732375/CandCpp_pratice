#include <iostream> 
#include <vector> 
using namespace std; 

// 解開參數包的同時，可以指定套用某個函式
template<typename T>
T sum(T first) {
    return first;
}

template<typename T, typename... Ts>
T sum(T first, Ts... params) {
    return first + sum(params...);
}

template<typename T>
T doubleIt(T t) {
    return t + t;
}

template<typename T, typename... Ts>
T doubleSum(T first, Ts... params) {
    // sum(doubleIt(params)...) 指的是解開參數包的時候，
    // 用每個參數呼叫 doubleIt。
    return doubleIt(first) + sum(doubleIt(params)...);
}

int main() { 
    cout << sum(1, 2) << endl;                              // 3
    cout << sum(string("1"), string("2")) << endl;          // 12
    cout << doubleSum(1, 2) << endl;                        // 6
    cout << doubleSum(string("1"), string("2")) << endl;    // 1212
    cout << doubleSum(string("1"), string("2"), string("3")) << endl;
    return 0; 
} 