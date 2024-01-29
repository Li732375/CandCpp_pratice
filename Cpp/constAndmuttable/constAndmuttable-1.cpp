#include <iostream> 
#include <string>
#include "account-1.h"

int main() { 
    // const 修飾表示不能變動實例狀態，這並不是自動發生的事情，
    // 如果呼叫的方法沒有被 const 修飾，會不能通過編譯。
    const Account acct = {"123-456-789", "Justin Lin", 1000};
    cout << acct.to_string() << endl;

    return 0; 
}

// How to use or compiler (in this example)?

// 1.
// in terminal, input command "g++ account-1.cpp constAndmuttable-1.cpp".
// generated a.exe(or a.out).
// execute a.exe(or a.out).

// 2.
// in terminal, input command "g++ -c account-1.cpp constAndmuttable-1.cpp".
// generated account-1.o and constAndmuttable-1.o in same folder.
// input command "gcc account-1.o constAndmuttable-1.o".
// generated a.exe(or a.out).
// execute a.exe(or a.out).