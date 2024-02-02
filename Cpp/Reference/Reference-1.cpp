#include <iostream>
#include "Reference-1.h"
using namespace std;

int main(void){
    // 
    int i = 1;
    changeValue1(i);
    cout << "i: " << i << endl;

    int *p = new int;
    *p = 1;
    changeValue2(p);
    cout << "*p: " << *p << endl;

    int x = 1;
    changeValue3(&x);
    cout << "x: " << x << endl;

    changeValue3(new int);

    int y = 5;
    int z = getValue(y);
    cout << "z: " << z << endl;

    return 0;
}