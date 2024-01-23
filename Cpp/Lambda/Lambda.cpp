#include <iostream> 
using namespace std; 

int main() { 
    int x = 10;

    // Lambda（全稱為 Lambda Expression）是一種用來產生
    // 「不具名（Anonymous）函數物件（Function Object）
    // 」的表示式。

    // lambda 運算式定義了一個 Callable 物件，也就是個可以接受呼叫操作的物件，
    // 例如函式就是其中之一。
    /*
    // lambda 運算式的定義方式:
    [ captures ] ( params ) -> ret { body }
    
    // 開頭的 [] 稱為 Capture Clause，來表示 Lambda 的定義開始。
    // 有抓取（capture）變數的功能，指定該如何將目前 scope 範圍之
    // 變數抓取至 lambda expression 中使用。

    // () 稱為 lambda declarator，等於函數的參數列，
    // 定義此匿名函數的傳入參數。如果不需要傳入任何參
    // 數的話，可以連同小括號都一起省略。其他限制如下:
    // 不可指定參數的預設值。
    // 不可使用可變長度的參數列表。
    // 參數列表不可以包含沒有命名的參數。

    // 其後的 -> ret（return） 表示此 Lambda 的回傳值。
    // ret 為回傳值型別，只有包含一個傳回陳述式（statement）
    // 或是根本沒有傳回值的話，這部分就可以直接省略，讓編
    // 譯器自行判斷傳回值的型別。

    // {} 即 Lambda 的實作。

    // Capture Clause 抓取變數的方式則分為傳值（by value）
    // 與傳參考（by reference）兩種，跟一般函數參數的傳入方式類似。
    // 例 auto print = [](int n) { cout << n << " "; };

    // 上例呼叫時可以接受一個引數，因為沒有 return，也沒有定義 lambda 
    // 運算式的傳回型態，就自動推斷為 ret 的部份為 void。
    // 等同 auto print = [](int n) -> void { cout << n << " "; };

    // 例 auto f1 = [](int n1, int n2) { return n2 - n1; };
    // auto f2 = [](int n1, int n2) -> int { return n2 - n1; };

    // lambda 運算式的本體若有 return，然而沒有定義 ret 的型態時，
    // 會自動推斷，因此上例 f1 的 ret 型態會自動推斷為 int

    [ captures ] ( params ) { body }
    [ captures ] { body }
    // 例 
    */

    //  [capture] 在只定義為 [] 時，沒辦法使用任何 lambda 運算式外部的變數，
    // 若想運用外部變數，定義時基本上從 = 與 & 出發。

    // [=]：lambda 運算式本體可以取用外部變數。
    // [&]：lambda 運算式本體可以參考外部變數。

    // 使用 = 時，lambda 運算式本體中取用到某外部變數時，
    // 其實是隱含地建立了同名、同型態的區域變數，然後將外
    // 部變數的值複製給區域變數，預設情況下不能修改，然而
    // 可以加上 mutable 修飾，不過要注意的是，這時修改的
    // 會是區域變數的值，不是外部變數。
    auto f = [=]() mutable -> void {
        x = 20;
        cout << x << endl;
    };

    f(); // 顯示 20
    cout << x << endl; // 顯示 10
    cout << endl;

    auto f2 = [&]() mutable -> void {
        x = 20;
        cout << x << endl;
    };

    f2(); // 顯示 20
    cout << x << endl; // 顯示 20

    /*
    [capture] 可以限定捕捉的變數有哪些，以及以哪種方式捕捉：

    [x, y]：以 = 的方式取用外部的 x、y。
    [x, &y]：以 = 取用外部的 x，以 & 的方式參考外部的 y。
    [=, &y]：以 & 的方式參考外部的 y，其餘外部變數取用時都是 = 的方式。
    [&, y]：以 = 的方式參考外部的 y，其餘外部變數以 & 的方式參考。
    要設置預設捕捉方式時，對於沒指定捕捉方式的其他變數，就會採用預設捕捉方式。
    */

    return 0; 
} 