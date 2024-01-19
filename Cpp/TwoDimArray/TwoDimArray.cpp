#include <iostream> 
using namespace std; 

int main() { 
    // C++ 沒有二維陣列這種東西，二維或多維陣列的概念，
    // 是以陣列的陣列（arrays of arrays）來實現。
    int maze[2][3] = {
                         {1, 2, 3},
                         {4, 5, 6}
                     };

    for(int* row : maze) {
        for(int i = 0; i < 3; i++) {
            cout << row[i] << "\t";
        }
        cout << endl;
    } 
    cout << "\n";

    // 上面寫法展開如下
    for(int (*it)[3] = begin(maze); it < end(maze); it++) {
        // 實際上 it 是陣列變數的位址。
        // it 遞增過程會是取址，即 &maze[0]、&maze[1]。
        // *it 的話，就會是 maze[0]、maze[1]，也就是一維陣列位址。
        
        int *row = *it; // 該行不可略，會導致僅輸出陣列位址

        for(int i = 0; i < 3; i++) {
            cout << row[i] << "\t"; // row 不可換為 it，會造成只輸出位址
        }
        cout << "\n"; 
    }
    cout << "\n"; 

    // 再展開就變成
    for(int (*it)[3] = begin(maze); it < end(maze); it++) {
        int (&row)[3] = *it;   // 使用參考

        for(int* offset = begin(row); offset < end(row); offset++) {
            int n = *offset;
            cout << n << "\t"; 
        }
        cout << endl; 
    }
    cout << "\n"; 

    // 濃縮回高可讀性
    for(auto &row : maze) {
        for(auto n : row) {
            cout << n << "\t";
        }
        cout << endl; 
    }
    cout << "\n"; 

    return 0; 
}