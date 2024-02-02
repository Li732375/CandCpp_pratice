// 參考（Reference）是物件的別名（Alias），也就是替代名稱，
// 對參考名稱存取時該有什麼行為，都參考了來源物件該有的行為，
// 在 C++ 中，「物件」這個名詞，不單只是指類別的實例，而是指
// 記憶體中的一塊資料。
#include <iostream>
using namespace std;

int main() {
    int n = 10;

    // 要定義參考，是在型態關鍵字後加上 & 運算子。
    int &r = n; // 同一物件的別名，改變 n 或 r，都是改變該記憶體空間的資訊。
    // r 不可再重新指派。
    int a = 5;
    //&r = a; // error: lvalue required as left operand of assignment

    // 參考的物件也可以是個指標。
    int *p = &n;
    int *&r1 = p; // 同 int* &r = p;
    // 後續取值以指標（*r1）的形式操作

    // 陣列必須指定長度
    int arr[] = {1, 2};
    int (&r2)[2] = arr;


    cout << "n：" << n << endl
         << "r：" << r << endl
         << "p：" << p << endl
         << "*p：" << *p << endl
         << "r2：" << r2 << endl << "\n";

    r = 20;

    cout << "n：" << n << endl
         << "r：" << r << endl
         << "p：" << p << endl
         << "*p：" << *p << endl
         << "r2：" << r2 << endl;

    return 0;
}