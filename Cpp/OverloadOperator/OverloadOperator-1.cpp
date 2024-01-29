#include <iostream>
#include <string>
using namespace std;

class Rational {
    int numer;
    int denom;

public:
    Rational(int numer, int denom) : numer(numer), denom(denom) {}
    friend Rational operator+(int, const Rational&);
    friend Rational operator+(const Rational&, int);
    friend ostream& operator<<(ostream&, const Rational&);
    
    string to_string() const;
    
};

string Rational::to_string() const { 
    return std::to_string(this->numer) + "/" + std::to_string(this->denom);
} 

// 有些運算子重載可以實作為類別成員函式，也可以實作為一般函式，
// 涉及 private 值域存取的，通常會實作為成員函式。

// 然而，若運算子涉及不同型態的運算，例如 Rational 加法運算的左或右運算元，
// 可以是 int 整數的話，運算子就得定義為非成員函式。
Rational operator+(int lhs, const Rational &rhs) { 
    return Rational(
        lhs * rhs.denom + rhs.numer,
        rhs.denom
    ); 
} 

Rational operator+(const Rational &lhs, int rhs) { 
    return Rational(
        lhs.numer + rhs * lhs.denom,
        lhs.denom
    ); 
} 

ostream& operator<<(ostream &os, const Rational &r) {
    return os << r.to_string();
}

int main() {
    Rational a(1, 2);
    Rational b(2, 3);

    cout << (1 + a) << endl;
    cout << (a + 1) << endl;
    
    cout << (1 + a).to_string() << endl;
    cout << (a + 1).to_string() << endl;

    return 0;
}