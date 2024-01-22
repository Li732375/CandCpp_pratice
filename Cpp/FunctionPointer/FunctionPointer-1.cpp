// 與同系列後面的檔案比較
#include <iostream> 
using namespace std; 

void sort(int*, int, bool (*compare)(int, int));
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

void sort(int* arr, int length, bool (*compare)(int, int)) { 
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