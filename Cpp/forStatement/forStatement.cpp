#include <iostream>

// 應用其下的 setw 用來設定字元寬度
#include <iomanip>
using namespace std;

int main() { 
    // 初始式、判斷式、遞增式都可以依情況省略，
    // 然而區隔的分號必須保留，判斷式被省略時，
    // 預設為 true。

    // 因此若只寫 for(;;){...}，即無窮迴圈。
    for(int j = 1; j < 10; j++) { 
        for(int i = 2; i < 10; i++) { 
            cout << i << "*" << j 
                 << "=" << setw(2) << i * j << " ";
        } 
        cout << endl; 
    } 

    return 0;
}