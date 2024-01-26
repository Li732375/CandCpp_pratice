#include <iostream> 
#include <string>
#include "account.h"

int main() { 
    // const 修飾表示不能變動實例狀態，這並不是自動發生的事情，
    // 如果呼叫的方法沒有被 const 修飾，就不能通過編譯。
    const string text = "Justin";
    //text.append(" Lin") // error: no matching function
    
    const Account acct = {"123-456-789", "Justin Lin", 1000};
    //cout << acct.to_string() << endl; // error: passing 'const Account' as 'this' argument discards qualifiers

    return 0; 
}

// How to use or compiler (in this example)?

// 1.
// in terminal, input command "g++ account.cpp constAndmuttable.cpp".
// generated a.exe(or a.out).
// execute a.exe(or a.out).

// 2.
// in terminal, input command "g++ -c account.cpp constAndmuttable.cpp".
// generated account.o and constAndmuttable.o in same folder.
// input command "gcc account.o constAndmuttable.o".
// generated a.exe(or a.out).
// execute a.exe(or a.out).