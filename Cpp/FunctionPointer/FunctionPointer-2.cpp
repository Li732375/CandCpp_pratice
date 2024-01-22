#include <iostream> 
using namespace std; 

// 使用 typedef，定義一個比較容易閱讀的名稱。
typedef bool (*CMP)(int, int);

// 意義同上
// C++ 11鼓勵使用 using 來取代 typedef，因為比較直覺，而且可以結合模版。
//using CMP = bool (*)(int, int);

void sort(int*, int, CMP);
bool ascending(int, int);
bool descending(int, int);

int main() { 
    int number[] = {3, 5, 1, 6, 9};

    sort(number, 5, ascending);
    // 顯示 1 3 5 6 9
    for(auto n : number) {
        cout << n << " ";
    }
    cout << endl;

    sort(number, 5, descending);
    // 顯示 9 6 5 3 1
    for(auto n : number) {
        cout << n << " ";
    }
    cout << endl;

    return 0; 
} 

void swap(int &a, int &b) {
    int t = a; 
    a = b; 
    b = t;
}

void sort(int* arr, int length, CMP compare) { 
    for(int flag = 1, i = 0; i < length - 1 && flag == 1; i++) { 
        flag = 0; 
        for(int j = 0; j < length - i - 1; j++) { 
            if(compare(arr[j + 1], arr[j])) { 
                swap(arr[j + 1], arr[j]); 
                flag = 1; 
            } 
        } 
    } 
}

bool ascending(int a, int b) {
    return a < b;
}

bool descending(int a, int b) {
    return a > b;
}