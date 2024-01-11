// 在 C 語言文件的〈資料型態〉中談到，在 C11 標準中，
// 建議包括 stdint.h 程式庫，使用 int8_t、int16_t、
// int32_t、int64_t、uint8_t、uint16_t、uint32_t、
// uint64_t 等作為整數型態的宣告，以避免平台相依性的
// 問題，在 C++ 中可以包含 cstdint 來使用這些型態。

// size_t 是個機器特定的無號型態，定義於 cstddef 標頭檔，
// 為 C 語言 stddef.h 的 C++ 版本，保證夠大可以容納任何物
// 件，若資料結構具有長度或索引概念，而且需要很大的容量，例
// 如陣列，可以使用 size_t 型態變數來實作長度或索引。

#include <iostream>
using namespace std;

int main(void){
    // 以上的資料型態在記憶體中佔有的大小，依平台系統而有所差異，
    // 字組的大小取決於機器，在 32 位元機器上通常一個字組是 4 個
    // 位元組，如果想知道這些資料型態在平台上，佔有的記憶體空間有
    // 多少，可以使用 sizeof 運算子。
    cout << "\n型態大小\t大小(bytes)";
    cout << "\nint\t\t" << sizeof(int);
    cout << "\nlong\t\t" << sizeof(long);
    cout << "\nfloat\t\t" << sizeof(float);
    cout << "\ndouble\t\t" << sizeof(double);
    cout << "\nchar\t\t" << sizeof(char) << "\n\n";

    // C++ 有 bool 型別，用來表示布林數。
    // 實際數值由語言實作決定，不一定總是對應於 1 與 0。
    cout << "bool\t\t" << sizeof(char) << "\n";
    cout << "sizeof(true)\t" << sizeof(true) << "\n";
    cout << "sizeof(false)\t" << sizeof(false) << "\n";
    
    cout << "true\t\t" << true <<" \n";
    cout << "false\t\t" << false << "\n";
    
    cout << "\n";

    return 0;
}