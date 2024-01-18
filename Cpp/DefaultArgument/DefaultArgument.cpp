#include <iostream> 
using namespace std; 

// C++ 可以使用預設引數，要在一開始的函式原型宣告中定義預設引數，
// 函式實作時無需再定義。
double area(double, double pi = 3.14159); 

// 可以指定兩個以上的預設引數，然而預設引數一旦出現在參數列，
// 右邊的參數也必須設定預設引數，在使用預設引數時，必須注意配
// 置順序。
//double volumn(double h = 1.0, double w = 1.0, double len);
double volumn(double len = 3.0, char ch = 'a', double w = 1.0, double h = 1.0);

// 預設引數是以引數的順序由左至右來進行。

// 定義函式原型時，允許多次定義預設引數
void f(int n, int k = 1);
void f(int n = 0, int k); 

int main(void) { 
    double r, pi; 

    cout << "輸入半徑與 PI: "; 
    cin >> r >> pi; 

    cout << "面積（自訂 PI）：" << area(r, pi) << endl
         << "面積（default）：" << area(r) << endl;
    
    // 呼叫函式時，若使用 volumn('z')，相當於 volumn('z', 3, 1.0, 1.0) 
    // 而不是 volumn(3, 'z', 1.0, 1.0)，而呼叫時使用 volumn( , 'z', , )
    // 這個方法是錯誤的。
    volumn('z');

    f();

    return 0; 
} 

double area(double r, double pi) { 
    return r*r*pi; 
}

double volumn(double len, char ch, double w, double h){
    return 0;
}

void f(int n, int k) {
    cout << "n " << n << endl;
    cout << "k " << k << endl;
}