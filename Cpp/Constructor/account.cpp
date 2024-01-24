#include <iostream> 
#include <string>
#include "account.h"
using namespace std;


string Account::to_string() {
    return string("Account(") + 
           this->id + ", " +
           this->name + ", " +
           std::to_string(this->balance) + ")";
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