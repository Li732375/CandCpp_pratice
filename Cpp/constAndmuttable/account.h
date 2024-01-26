#include <string>
using namespace std; 

class Account { 
    private: 
        // 值域（field）
        string id;  
        string name; 
        double balance;

    public: 
        // 值域（field）

        // 如果建構式中想要指定某個值域的值，可以定義
        // 初始式清單（constructor initializer list），
        // 直接在定義類別時撰寫。
        Account(string id, string name, double balance):
            id(id), name(name), balance(balance) {};
        // id 值域就會用參數 id 的值初始化，name 值域就會用參數 name 的值初始化，
        // balance 值域就會用參數 balance 的值初始化，括號中指定不一定要是參數，
        // 也可以是運算式，如果初始式清單省略了某個值域，那就會使用預設初始化。

        // 建構過程，想要委由另一個版本的建構式，可以在 : 後再指定。
        Account(string id, string name) : Account(id, name, 0.0) {}

        // 想提供無參數建構式，並希望其行為與預設建構式相同，可以加上 default。
        Account() = default;
        
        void deposit(double amount);
        void withdraw(double amount);
        string to_string();
};