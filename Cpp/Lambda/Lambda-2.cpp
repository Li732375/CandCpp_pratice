#include <iostream> 
#include <functional>
#include <algorithm>
using namespace std; 

int main() {
    // [] 開頭的運算式，這些運算式是 lambda 運算式。
    int number[] = {3, 5, 1, -4, 6, 9};
    auto print = [](int n) { cout << n << " "; };

    // sort、for_each，這些是定義在 algorithm 的函式。

    for_each(begin(number), end(number), print);
    cout << "\n";
    for_each(begin(number), end(number), print);
    cout << "\n" << endl;

    // lambda 運算式撰寫範例，sort() 計算後會造成陣列序位反轉。
    sort(begin(number), end(number), [=](int n1, int n2) { 
        cout << "(" << n2 << ") - (" << n1 << ") = " << n2 - n1 << "   \t=> "; 
        for_each(begin(number), end(number), print); 
        cout << "\n";
        return n2 - n1; });
    cout << "\n";

    for_each(begin(number), end(number), print); // 顯示 9 6 -4 1 5 3
    cout << "\n";
    // 效果同下
    /*
    for (int n : number){
        cout << n << " ";
    }
    cout << endl;
    */
   
    // lambda 運算式撰寫範例，sort() 計算後會造成陣列序位反轉。
    sort(begin(number), end(number), [](int n1, int n2) { return n1 - n2; });  
    for_each(begin(number), end(number), print); // 顯示 3 5 1 -4 6 9
    cout << endl;

    return 0; 
}