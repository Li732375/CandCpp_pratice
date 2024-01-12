#include <iostream> 
using namespace std; 

int main() { 
    // 變數（Variable）提供一個有名稱的記憶體儲存空間，
    // 變數可包含的資訊包含變數資料型態、變數記憶體位址
    // 與變數儲存值；C++ 開發者也常用物件（object）這
    // 個名稱來表示變數，因為物件對 C++ 開發者來說，不
    // 只是表示類別實例之類的東西，而是代表著一塊記憶體
    // 區域，可能含有型態與值等資訊。

    // C++ 使用 int、float、double、char、bool 等宣告變
    // 數名稱與型態，變數命名時不可以使用數字作為開頭，也
    // 不可以使用一些特殊字元，像是 *&^% 之類的字元，變數
    // 名稱不可以與 C++ 內定的關鍵字同名。
    int ageForStudent; 
    double scoreForStudent; 
    char levelForStudent; 

    // 在函式外宣告變數，變數會預設為對應型態的零值，若是函式
    // 中宣告變數，被配置的這塊空間中原先可能就有資料，也因此
    // 變數在宣告後的值是不可預期的，應該在在變數宣告後初始其
    // 值，可以使用「指定運算子」（Assignment operator）= 
    // 來指定變數的值。
    cout << "\n年級\t得分\t等級"; 
    cout << "\n" << ageForStudent 
         << "\t" << scoreForStudent 
         << "\t" << levelForStudent 
         << "\n"; 

    // 也可以在使用宣告變數後，使用以下的建構子（Constructor）
    // 方式將變數的值初始為各型態的零值。
    int ageForStudent_1 = int();
    double scoreForStudent_1 = double();
    char levelForStudent_1 = char();

    cout << "\n年級\t得分\t等級"; 
    cout << "\n" << ageForStudent_1 
         << "\t" << scoreForStudent_1
         << "\t" << levelForStudent_1 
         << "\n"; 

    // 在 C++ 11 中，增加了清單初始化（list initialization），
    // 其目的在統一初始化的方式，對於基本型態，也可以使用同一種風
    // 格來初始化。
    int ageForStudent_2{0};
    double scoreForStudent_2{0.0};
    char levelForStudent_2{'A'};
    // 這種初始化還有個特性，{} 中的值若指定給變數時，
    // 有可能造成精度遺失的話，編譯器會提出警訊。
    double pi = 3.14159;

    // 因為型態發生了隱式轉換（implicit conversion）。
    int x = {pi}; // 小數會被截去，整數部份被指定給 x
    // warning: narrowing conversion of 'pi' from 'double' to 'int'

    // 如下撰寫才不會提出警訊。
    int x_1 = pi; // 小數會被截去，整數部份被指定給 x

    cout << "\n年級\t得分\t等級"; 
    cout << "\n" << ageForStudent_2 
         << "\t" << scoreForStudent_2 
         << "\t" << levelForStudent_2
         << "\n"; 


    ageForStudent = 5; 
    scoreForStudent = 80.0; 
    levelForStudent = 'B'; 

    cout << "\n年級\t得分\t等級"; 
    cout << "\n" << ageForStudent 
         << "\t" << scoreForStudent 
         << "\t" << levelForStudent 
         << "\n"; 

    return 0;
}
// 有關特別字 constexpr & auto 作用詳見網址
// https://openhome.cc/Gossip/CppGossip/Variable.html