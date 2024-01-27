#include <iostream>
using namespace std;

// 相同類別產生的實例而言，會擁有各自的值域資料，
// 不過有些資料不用實例各自擁有一份，而可以屬於類
// 別。如 PI 成員，因為 PI 是個常數，不需要個別
// 實例擁有各自的 PI。
class Math {
public:
    // 在類別內初始 static 資料成員的話，必須是個 constexpr。
    constexpr static double PI = 3.14159;
    
    static double toRadian(double);
    static double PI_1;
};

// static 資料成員屬於類別，而非個別實例，想在類別內
// 初始 static 資料成員的話，必須是個 constexpr，也
// 就是必須是編譯時期常數，若否，必須在類別外指定。
double Math::PI_1 = 5.14;

double Math::toRadian(double angle) {
    return PI / 180 * angle;
}

int main() {
    // static 成員屬於類別，可以使用類別名稱加上 :: 解析運算子來存取。
    cout << Math::PI_1 << endl;

    // static 成員屬於類別，同樣地，可以使用類別名稱
    // 加上 :: 解析運算子來呼叫 static 函式成員。
    cout << Math::PI << endl;

    // 由於 static 成員是屬於類別而不是實例，呼叫靜態函式時，
    // 並不會傳入實例位址，也就是 static 函式中不會有 this 
    // 指標，因此 static 函式中不允許使用非 static 成員，因
    // 為沒有 this 可以使用。
    cout << Math::toRadian(30) << endl;

    return 0;
}