#include <iostream>
#include <string>
using namespace std;

struct Double {
    const double n;
    explicit Double(double n) : n(n) {} // 如果型態轉換必須得明確，可以加上 explicit。
};

class Rational {
    int numer;
    int denom;

    public:
        Rational(int numer, int denom) : numer(numer), denom(denom) {}

        // 如果型態轉換必須得明確，可以加上 explicit。
        explicit operator double() {
            return static_cast<double>(this->numer) / this->denom;
        }

        explicit operator Double() {
            return Double(static_cast<double>(this->numer) / this->denom);
        }
};

void foo(Double d) {
    cout << d.n << endl;
}

int main() {
    Rational a(1, 2);

    // static_cast 拿掉，就會發生編譯錯誤，因為 explicit 指出不允許隱含型態轉換。
    cout << static_cast<double>(a) + 0.1 << endl;
    cout << 0.3 + static_cast<double>(a) << endl;

    foo(static_cast<Double>(a));

    return 0;
}