#include <iostream> 
using namespace std; 

template <typename T>
void print(T p) {
    cout << p << endl;
}

// 如果實際上傳遞的引數型態各不相同，會採用遞迴方式解開參數包。
template <typename T, typename ...Ts>
void print(T first, Ts... rest) { // res 在這裡僅僅是參數名稱。
    cout << first << " ";
    print(rest...);
}

int main() { 
    print(1);
    print(1, "2");
    print(1, "2", 3.14);

    return 0; 
}