#include <iostream>
#include <string>
using namespace std;

struct Double {
    const double n;
    Double(double n) : n(n) {}
};

class Rational {
    int numer;
    int denom;

    public:
        Rational(int numer, int denom) : numer(numer), denom(denom) {}

        // 在其他的運算需求中，可能會想要 Rational 能轉換為 int、double 
        // 或者是其他型態，以便進一步以該型態的其他值進行運算，這可以透過
        // 自訂轉換函式來達到，又稱為轉型運算子。

        // 允許編譯器隱含地完成型態轉換。
        operator double() {
            return static_cast<double>(this->numer) / this->denom;
        }

        operator Double() {
            return Double(static_cast<double>(this->numer) / this->denom);
        }
};

void foo(Double d) {
    cout << d.n << endl;
}

int main() {
    Rational a(1, 2);

    // a 隱含地轉換為 double
    cout << a + 0.1 << endl;  
    cout << 0.3 + a << endl;

    // a 隱含地轉換為 Double
    foo(a);

    return 0;
}