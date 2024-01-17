#include <iostream> 
using namespace std; 

int main() { 
    // C++ 沒有二維陣列這種東西，二維或多維陣列的概念，
    // 是以陣列的陣列（arrays of arrays）來實現。
    int maze[2][3] = {
                         {1, 2, 3},
                         {4, 5, 6}
                     };

    for(auto row : maze) {
        for(int i = 0; i < 3; i++) {
            cout << row[i] << "\t";
        }
        cout << endl;
    } 
    cout << "\n";

    // 用 for range 寫法
    for(auto &row : maze) {
        for(auto n : row) {
            cout << n << "\t";
        }
        cout << endl; 
    }

    return 0; 
}