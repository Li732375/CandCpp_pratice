#include <iostream> 
using namespace std; 

int main() { 
    int number[5] = {0, 1, 2, 3, 4};
    // 若在宣告陣列時指定各個索引處的的值，可以不用宣告陣列元素大小。

    // 要將陣列指定給另一個陣列，只能循序逐個元素進行複製。

    // 要比較兩個陣列是否相同的話，並不是比較其內容，
    // 而是比較兩個陣列變數的位址值
    
    // 若想比較兩個陣列元素內容是否相同，也要用逐個元素進行比對。

    // 如果使用 const 或 constexpr 來修飾陣列，每個索引位置就成為唯讀。
    constexpr int number_1[] = {1, 2, 3};
    //number_1[1] = 10; // error: assignment of read-only location 'number_1[1]'

    int length = sizeof(number) / sizeof(number[0]); // 計算出長度

    for(int i = 0; i < length; i++) {
        cout << number[i] << " "; 
    }
    cout << endl; 

    // C++ 17 的 iterator 提供了 size 函式，可以用來計算陣列大小，
    // 不過目前撰寫文件時使用的 g++ 編譯器需要加上 -std=c++17 才可
    // 以使用。
    cout << "number 長度為 " << size(number) << "\n";

    // C++ 11 提供了 begin 與 end 函式，begin 會傳回陣列首個元素的位址，
    // end 傳回最後一個元素的位址，當對位址值進行運算時，會以資料型態的長
    // 度偏移。
    for(auto offset = begin(number); offset != end(number); offset++) {
        // offset 是個指標（pointer），型態會是 int*，
        // 儲存的是位址，而 *offset 是取得儲存於該位址
        // 的值，因為之後才會談到指標，這邊就先用 auto
        // 讓編譯器推斷型態。
        auto n = *offset;
        cout << n << " "; 
    }
    cout << endl; 

    // C++ 11 也提供 for range 語法
    for(auto n : number) {
        cout << n << " "; 
    }
    cout << endl;


    return 0; 
}