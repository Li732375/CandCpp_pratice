#include <iostream> 
#include <vector> 
using namespace std; 

// 如果呼叫時的引數是同一型態，一個簡單的方式是展開為陣列、vector 等型態。
template <typename T, typename ...Ts>
T sum(T first, Ts... res) { // first and res 在這裡僅僅是參數名稱。
    vector<T> nums = {res...}; // {res...} 用來解開參數包。
    // 指 {res...} 會分別產生 {p1, p2, p3} 與 
    // {p1, p2, p3, p4, p5}（p1 等名稱代表參數）。

    T r = first;
    for(T n : nums) {
        cout << n << " ";
        r += n;
    }
    cout << endl;
    return r;
}

int main() { 
    cout << sum(1, 2, 3) << "\n" << endl;
    cout << sum(1, 2, 3, 4, 5) << "\n" << endl;
    return 0; 
} 