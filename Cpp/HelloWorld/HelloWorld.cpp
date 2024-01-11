// 告訴編譯器（Compiler）這個程式必須使用到 iostream 這
// 個表頭檔（Header file）中的函式（Function）與
// 類別（Class）定義。
#include <iostream>

// 表示使用 std 名稱空間（Namespace）下的名稱，例如 cout。
// 該行沒寫的話，就必須寫為 std::cout。
using namespace std; 

int main() { 
    cout << "Hello! World!\n"; 
    cout << "哈囉! C++!\n";

    return 0; 
}