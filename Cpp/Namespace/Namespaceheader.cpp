#include "Namespaceheader.h"

namespace bank {
    using namespace std;

    Account::Account(string id, string name, double balance) {
        this->id = id;
        this->name = name;
        this->balance = balance;
    }

    string Account::to_string() const {
        return string("Account(") + 
            this->id + ", " +
            this->name + ", " +
            std::to_string(this->balance) + ")";
    }

}

// 兩種形式皆可
/*
#include "Namespaceheader.h"
using namespace std;

bank::Account::Account(string id, string name, double balance) {
    this->id = id;
    this->name = name;
    this->balance = balance;
}

string bank::Account::to_string() const {
    return string("Account(") + 
           this->id + ", " +
           this->name + ", " +
           std::to_string(this->balance) + ")";
}
*/