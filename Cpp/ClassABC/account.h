#include <string>
using namespace std; 

// 從 C 背景來的開發者可能會想，這種風格像是 C 的結構（struct），
// 在 C++ 中，struct 也被視為定義類別，將以上的 class 關鍵字換為 
// struct，程式也可以運作，struct 與 class 的差別在於，前者在第一
// 個權限可見的修飾詞出現前（例如 public、private），定義的成員預
// 設會是公開可存取，而後者預設會是私有（也就是 private）。
class Account { 
    private: 
        // 值域（field）
        string id;  
        string name; 
        double balance;
        // 以上的變數，在函式裡通通要用 this-> 變數名稱 的方式存取。

    public: 
        // 值域（field）

        // 如果沒有定義任何建構式，編譯器會自動產生沒有參數的預設建構式，
        // 如果自定義了建構式，就是類別內初始式（in-class initializer），
        // 會優先採用你定義的建構式。
        Account(string id, string name, double balance); // 建構式，初始 Account 值域。
        void deposit(double amount);
        void withdraw(double amount);
        string to_string();
};