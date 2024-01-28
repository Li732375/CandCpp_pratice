#include <string>
using namespace std; 

class Account { 
    private: 
        string id;  
        string name; 
        double balance;

    public: 
        Account(string id, string name, double balance):
            id(id), name(name), balance(balance) {};
        Account(string id, string name) : Account(id, name, 0.0) {}
        Account() = default;
        
        void deposit(double amount);
        void withdraw(double amount);

        // 雖然 to_string 並沒有變動實例狀態，也不能通過編譯。
        string to_string() const; // 如果要通過編譯的話，to_string 必須加上 const 限定。
};