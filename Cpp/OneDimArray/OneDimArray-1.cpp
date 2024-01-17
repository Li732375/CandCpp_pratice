// 對陣列進行排序、尋找、反轉等操作，可以使用包含 algorithm 標頭檔。
#include <algorithm> // 直到後續的類別套件 array、vector...等亦適用。
#include <iostream> 

using namespace std; 

int main() { 
    int number[] = {30, 12, 55, 31, 98, 11};

    // 排序 
    sort(begin(number), end(number));
    for(auto n : number) {
        cout << n << " ";
    }
    cout << endl;

    cout << "輸入搜尋值：";
    int search = 0;
    cin >> search;

    // 搜尋
    int* addr = find(begin(number), end(number), search);
    cout << (addr != end(number) ? "找到" : "沒有")
         << "搜尋值" 
         << endl;

    // 反轉 
    reverse(begin(number), end(number));
    for(auto n : number) {
        cout << n << " ";
    }
    cout << endl;

    // 指定片段反轉 
    reverse(begin(number) + 1, end(number) - 1);
    for(auto n : number) {
        cout << n << " ";
    }
    cout << endl;

    return 0; 
}