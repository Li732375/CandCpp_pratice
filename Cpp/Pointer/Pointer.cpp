#include <iostream> 
using namespace std; 

int main() { 
    // 基本使用細節同 c，詳見 c 的 Pointer/Pointer.c
    int n = 10; 
    void *p = &n;

    // 如果指標一開始不儲存任何位址，可設定初值為 0，或者是使用 nullptr。
    int *p1 = nullptr;

    // 由於 void* 型態的指標沒有任何型態資訊，只用來持有位址，
    // 不可以使用 * 運算子對 void* 型態指標提取值，編譯器也不
    // 會允許將 void* 指標直接指定給具有型態資訊的指標，必須使
    // 用 reinterpret_cast 明確告知編譯器，這個動作是你允許的。
    int *iptr = reinterpret_cast<int*>(p); // reinterpret_cast 指定轉型
    cout << *iptr << endl; // 顯示 10

    // 被 const 宣告的變數指定值後，就不能再改變變數值，也無法對該變數取址。
    const int n1 = 10;
    //int *p2 = &n1; // error,  invalid conversion from `const int*' to `int*'
    const int *p2 = &n1; // 必須使用對應的 const 型態指標才可以。
    //*p2 = 20; // 同樣也就不能試圖改變位址處的資料。
    cout << "*p2 " << *p2 << "\n";

    // 必要時，可以用 const_cast 讓編譯器住嘴。
    int *p3 = const_cast<int*>(&n1); // const_cast 指定轉型
    cout << "*p3 " << *p3 << "\n";

    // 要留意的是，const int *p 宣告的 p 並不是常數，可以儲存不同的位址。
    const int m = 20;

    p2 = &m;
    cout << "*p2 " << p2 << "\n";

    // new 也可以產生位址
    int *r = new int;
    *r = 300;
    cout << "r " << r << endl;
    cout << "*r " << *r << endl;

    // type const 時，表示指標不可重指。
    int *const m1 = new int;
    *m1 = 100;
    *m1 = 200;
    cout << "*m1 " << *m1 << endl;
    delete m1;
    //m1 = new double; // 

    // const type 時，表示變數不可異動。
    const int *n2 = r;
    //*n2 = 100;
    cout << "*n2 " << *n2 << endl;
    n2 = m1; // m1 已釋出，因此結果為未知數。
    cout << "*n2 " << *n2 << endl;


    return 0; 
}