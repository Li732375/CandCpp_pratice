// 對陣列進行排序、尋找、反轉等操作，可以使用包含 algorithm 標頭檔。
#include <algorithm> // 後續有關容器的標頭檔 array、vector...等亦適用。
#include <iostream> 
using namespace std; 

void printArray(const char *Name, const int *p_array, int size_array){
    cout << Name << " ";

    // 因此處的變數皆另外複製的，即便是採用指標，
    // 也不過是另立一個指向陣列首個元素的新連結，
    // 不能執行一些原先變數本身的操作。

    // 這裡的 size_array 不可替換成 *(&array) - array
    for(int i = 0; i < size_array; i++) { 
        cout << p_array[i] << " ";
    }
    cout << "\n";
}

int main() { 
    int number[] = {30, 12, 55, 31, 98, 11};
    printArray("number", number, *(&number + 1) - number);

    // 排序 
    sort(begin(number), end(number));
    printArray("number (sort)", number, *(&number + 1) - number);

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
    printArray("number (reverse)", number, *(&number + 1) - number);

    // 指定片段反轉 
    reverse(begin(number) + 1, end(number) - 1);
    printArray("number (part reverse)", number, *(&number + 1) - number);

    return 0; 
}