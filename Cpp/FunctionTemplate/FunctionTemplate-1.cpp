#include <iostream> 
using namespace std; 

// 在函式裡引進陣列，原先寫法
void printAll(int *arr, int len) {
    for(int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// 如果想在 printAll 中使用 for range 可行嗎？
// 就上例來說沒辦法，必須改為
void printAll_1(int (*arr)[2]) {
    for(auto elem : *arr) {
        cout << elem << " ";
    }
    cout << endl;
}

void printAll_2(int (*arr)[3]) {
    for(auto elem : *arr) {
        cout << elem << " ";
    }
    cout << endl;
}

// 上述兩函式參數上寫死了陣列長度，仔細看看兩個函式的實作內容是相同的，
// 既然編譯器可以為函式模版推斷出對應型態的版本，那推斷出陣列長度?
template <typename T, int L>
// L 並不是以 typename 定義，而是 int，
// 這稱為模版的非型態參數（nontype parameter），
// 編譯器會試著為非型態參數推斷出一個值，
// 值的推斷來源必須是個常數運算式，也就是
// 靜態時期可決定的值。
void printAll_3(T (*arr)[L]) {
    for(int elem : *arr) {
        cout << elem << " ";
    }
    cout << endl;
}

// 模板之間獨立撰寫不共用。
template <typename T, int L>
void printAll_3(T (&arr)[L]) {
    // 用 auto 應對多種資料型態
    for(auto elem : arr) {
        cout << elem << " ";
    }
    cout << endl;
}

// 其實還可以再改成
template <typename T>
void printAll_3(T &arr) { // 拿掉[L]
   for(auto elem : arr) {
       cout << elem << " ";
   }
   cout << endl;
}

int main() { 
    int arr1[] = {1, 2};
    int arr2[] = {3, 4, 5};

    printAll(arr1, 2);
    printAll(arr2, 3);
    cout << endl;

    printAll_1(&arr1);
    printAll_2(&arr2);
    cout << endl;

    printAll_3(&arr1);
    printAll_3(&arr2);
    cout << endl;

    printAll_3(arr1);
    printAll_3(arr2);
    cout << endl;

    printAll_3(arr1);
    printAll_3(arr2);
    cout << endl;

    return 0; 
} 