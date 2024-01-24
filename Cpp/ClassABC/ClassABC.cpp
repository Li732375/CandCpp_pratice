#include <iostream> 
#include <string>

// 在檔頭檔中定義類別，表頭檔案的名稱建議與類別名稱同名。
#include "account.h"

int main() { 
    Account acct = {"123-456-789", "Justin Lin", 1000};
    cout << acct.to_string() << endl;

    acct.deposit(500);
    cout << acct.to_string() << endl;

    acct.withdraw(700);
    cout << acct.to_string() << endl;

    return 0; 
}

// How to use or compiler (in this example)?

// 1.
// in terminal, input command "g++ account.cpp ClassABC.cpp".
// generated a.exe(or a.out).
// execute a.exe(or a.out).

// 2.
// in terminal, input command "g++ -c account.cpp ClassABC.cpp".
// generated account.o and ClassABC.o in same folder.
// input command "gcc account.o ClassABC.o".
// generated a.exe(or a.out).
// execute a.exe(or a.out).