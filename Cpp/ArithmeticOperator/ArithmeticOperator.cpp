#include <iostream>
using namespace std;

int main(void){
    // 運算子的使用基本上由左而右進行運算，遇到加減乘除的順序問題時，
    // 也是先乘除後加減，必要時加上括號表示運算的先後順序。
    cout << (1 + 2 * 3) << "\n\n"; // 顯示 7

    // 這個程式的結果會顯示 3.3333，這是 C++ 做了型態的
    // 隱式轉換（Implicit conversion），在一個型態混雜
    // 的算式中，長度較長的資料型態會成為目標型態，較小
    // 的型態會自動提升，因而在上例中 3 會被提升為 3.0
    // 再進行運算，結果就可以顯示無誤，這樣的轉換又稱算
    // 術轉換（Arithmetic conversion）。
    double number = 10.0;
    cout << number / 3 << "\n\n";

    // 在一個指定的動作中，左值會成為目標型態，
    // 當右值型態比左值型態長度小時，右值會自動
    // 提升為目標型態。
    int num = 10;
    double number_1 = num;
    // number 的值最後會是 10.0，在指定的動作時，
    // 如果右值型態比左值型態型態長度大時，超出可
    // 儲存範圍的部份會被自動消去，例如將浮點數指
    // 定給整數變數，小數的部份會被自動消去。
    int num_1 = 0;
    double number_2 = 3.14;
    num_1 = number_2;
    cout << num_1 << "\n\n";

    // 算術運算必要時，得進行型態的顯式轉換（Explicitly conversion）。
    int a = 10;
    int b = 3;
    cout << a / b; // 顯示 3
    // 因為 a 與 b 都是 int，計算結果也就是 int，
    // 想得到小數的結果，必須顯式地轉換型態，方式
    // 之一是使用舊式的 C 轉型（cast）語法。
    cout << (double) a / b << "\n\n"; // 顯示 3.33333
    // 或者是使用函式標示方式，這種轉型是強制性的。
    cout << double(a) / b << "\n\n"; // 顯示 3.33333
    // 或者用具名轉型（named casting）的 static_cast
    cout << static_cast<double>(a) / b << "\n\n"; // 顯示 3.33333
    
    // 再一個具名轉型（named casting）的 例子
    int num_2 = 0;
    double number_3 = 3.14;
    
    // 編譯時在控制台加上 `-Wconversion` 引數也不會有警訊
    num_2 = static_cast<int>(number_3);
    cout << num_2 << "\n\n";

    // 看起來 static_cast 也能讓編譯器住嘴，實際上不然
    const double PI = 3.14159;
    //double *pi = &PI;  // error: invalid conversion from 'const double*' to 'double*'
    //double *pi_1 = static_cast<double*>(&PI); // error: invalid static_cast from type 'const double*' to type 'double*'
    
    // 只有這樣才行
    double *pi_2 = (double*) &PI; // 沒有錯誤也沒有警訊
    // PI 是個 const 修飾過的變數，儲存的值是唯讀的，
    // 以上程式碼試圖將唯讀的記憶體空間位址指定給 pi，
    // 如果之後試圖對 pi 位址處的資料做變動，執行時期
    // 會有不可預期的結果，為此編譯器不能通過編譯，若
    // 真要通過編譯，得使用 const_cast。
    double *pi_3 = const_cast<double*>(&PI); 

    return 0;
}