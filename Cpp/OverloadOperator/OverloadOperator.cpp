#include <iostream>
#include <string>
using namespace std;

// 運算子重載是函式重載的延伸應用，定義類別時可以指定重載哪個運算子，實作對應的運算。
// 僅可以重載現有的運算子，不能自行定義額外的運算子。
// 對於內建的資料型態的運算方式不可改變。
// 運算順序與方向不可改變。
// 運算元個數也不可改變。
class Rational {
    int numer;
    int denom;

    public:
        Rational(int numer, int denom) : numer(numer), denom(denom) {}

        // 兩元運算
        Rational operator+(const Rational&); // 參數表示運算元右方的物件（相符類別或型別的變數）
        Rational operator-(const Rational&);
        Rational operator*(const Rational&);
        Rational operator/(const Rational&);

        // 單一運算元
        Rational& operator++(); // 前置，例如 ++x
        Rational& operator--(); // 前置，例如 --x
        Rational operator++(int); // 後置，例如 x++
        Rational operator--(int); // 後置，例如 x--
        // 大部份的運算子都是可以被重載的，然而 .、::、.*、?: 不能重載。

        string to_string() const;
};

// 回傳執型態 該函式隸屬類別::operator運算子(...){}
Rational Rational::operator+(const Rational &that) { 
    return Rational(
        this->numer * that.denom + this->denom * that.numer,
        this->denom * that.denom
    ); 
} 

Rational Rational::operator-(const Rational &that) { 
    return Rational(
        this->numer * that.denom - that.numer * this->denom,
        this->denom * that.denom
    ); 
} 

Rational Rational::operator*(const Rational &that) { 
    return Rational(
        this->numer * that.numer,
        this->denom * that.denom
    ); 
} 

Rational Rational::operator/(const Rational &that) { 
    return Rational(
        this->numer * that.denom,
        this->denom * that.numer
    ); 
} 

Rational& Rational::operator++() {
    this->numer = this->numer + this->denom;
    return (*this);
}

Rational& Rational::operator--() {
    this->numer = this->numer - this->denom;
    return (*this);
}

Rational Rational::operator++(int) {
    Rational r = (*this);
    this->numer = this->numer + this->denom;
    return r;
}

Rational Rational::operator--(int) {
    Rational r = (*this);
    this->numer = this->numer - this->denom;
    return r;
}

string Rational::to_string() const { 
    return std::to_string(this->numer) + "/" + std::to_string(this->denom);
} 

int main() {
    Rational a(1, 2);
    Rational b(2, 3);

    cout << (a + b).to_string() << endl;
    cout << (a - b).to_string() << endl;
    cout << (a * b).to_string() << endl;
    cout << (a / b).to_string() << endl;
    cout << (++a).to_string() << endl;
    cout << (--a).to_string() << endl;
    cout << (b++).to_string() << endl;
    cout << (b--).to_string() << endl;

    return 0;
}