#include <iostream> 
#include <string>
#include "account-1.h"
using namespace std;

// 當方法被加上 const 限定後，方法就不能有改變值域的動作，
// 有了這個保證，方才的 to_string 呼叫才能通過編譯。
string Account::to_string() const{
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