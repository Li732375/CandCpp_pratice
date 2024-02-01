#include <iostream>
#include "Namespaceheader.h"
using namespace std;
using namespace bank;

int main(void){
    // 在使用 cout、string 等名稱前，都會撰寫 using namespace std 的原因，
    // 這些名稱是定義在 std 名稱空間之中，當然，using 不可以濫用，不然名稱衝
    // 突也可能發生，C++ 其實並不建議使用 using，多半建議以 std::cout、
    // std::string 來指明。
    Account acct = {"123-456-789", "Justin Lin", 1000};
    cout << acct.to_string() << endl;

    return 0;
}