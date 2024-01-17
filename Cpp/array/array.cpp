#include <iostream>

// 這裡的 array 隸屬於類別（class template），概念與原生 array 大致相仿，但用法有別。
#include <array>
using namespace std;

int main() {
    // 類別建立實例的用法
    array<int, 3> number = {10, 20, 30};
    array<int, 3> id = {0};    // 全部初始為 0

    // for range 語法
    for(int n : number) {
        cout << n << " ";
    }
    cout << "\n";

    // 可以從 array 的 size 方法得知元素的個數，
    // empty 方法可以得知是否為空，
    // front 方法可以取得第一個元素，
    // back 方法可以取得最後一個元素，
    // fill 方法可以將各元素內容設為指定值。
    for(int i = 0; i < number.size(); i++) {
        // 透過 [] 指定索引可以存取特定位置的元素。
        cout << number[i] << " ";
    }
    cout << "\n\n";

    cout << "number 是否為空？" << (number.empty()?"true":"false") << "\n\n";
    cout << "首個元素 " << number.front() << "\n";
    cout << "末端元素 " << number.back() << "\n\n";
    cout << "一次更新全部元素 " << "\n";
    number.fill(4);
    cout << "更新後" << "\n";

    for(auto n : number) {
        cout << n << " ";
    }
    cout << "\n\n";

    array<int, 3> a1(number); // number -> a1

    cout << "a1\n";
    for(auto n : a1){
        cout << n << " ";
    }
    cout << "\n\n";

    array<int, 3> a2 = a1; // 原生的 array 不允許等號操作
    cout << "a2\n";
    for(auto n : a2){
        cout << n << " ";
    }
    cout << "\n\n";

    cout << "再一次更新 number 全部元素為 1，看是否會連動？ " << "\n";
    number.fill(1);
    cout << "number\n";
    for(auto n : number){
        cout << n << " ";
    }
    cout << "\n\n";

    cout << "a1\n";
    for(auto n : a1){
        cout << n << " ";
    }
    cout << "\n\n";

    cout << "a2\n";
    for(auto n : a2){
        cout << n << " ";
    }
    cout << "\n\n";


    return 0;
}