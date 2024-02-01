#include <string>

namespace bank {
    using namespace std; 

    class Account { 
    private:
        string id;  
        string name; 
        double balance;

    public: 
        Account(string id, string name, double balance);
        string to_string() const;
    };
}