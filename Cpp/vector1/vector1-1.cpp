#include <algorithm> // 進行排序、尋找、反轉等操作，可以使用包含 algorithm 標頭檔。
#include <iostream> 
#include <vector>
using namespace std; 

int main() { 
    vector<int> number = {30, 12, 55, 31, 98, 11, 41, 80, 66, 21};

    // 排序 
    sort(number.begin(), number.end());
    for(auto n : number) {
        cout << n << " ";
    }
    cout << endl;

    cout << "輸入搜尋值：";
    int search = 0;
    cin >> search;

    // 搜尋
    vector<int>::iterator it = find(number.begin(), number.end(), search);
    cout << (it != number.end() ? "找到" : "沒有")
         << "搜尋值" 
         << endl;

    // 反轉 
    reverse(number.begin(), number.end());
    for(auto n : number) {
        cout << n << " ";
    }
    cout << endl;

    // 指定片段反轉 
    reverse(begin(number) + 1, end(number) - 1); // 寫法一

    for(auto n : number) {
        cout << n << " ";
    }
    cout << endl;
    
    reverse(number.begin(), number.end() - 1); // 寫法二

    for(auto n : number) {
        cout << n << " ";
    }
    cout << endl;


    return 0; 
}