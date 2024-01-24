#include <iostream> 
#include <string>
#include "account.h"
using namespace std;

// :: 是類別範圍解析（class scope resolution）運算子，
// 在實作類別建構式或方法（method）時，在 :: 前指明實作
// 哪類別之定義。
Account::Account(string id, string name, double balance) {
    // 在建構式（constructor）或方法的實作中，若要存取實例本身，
    // 可以透過 this，這是個指標，因此要透過箭號運算子來存取值域。
    this->id = id;
    this->name = name;
    this->balance = balance;
}

string Account::to_string() {
    return string("Account(") + 
           this->id + ", " +
           this->name + ", " +
           std::to_string(this->balance) + ")"; // 
}

void Account::deposit(double amount) {
    if(amount <= 0) {
        cout << "必須存入正數" << endl;
        return;
    }
    this->balance += amount;
}

void Account::withdraw(double amount) {
    if(amount > this->balance) {
        cout << "餘額不足" << endl;
        return;
    }
    this->balance -= amount;
}