#include <iostream> 
using namespace std;

struct IntPlus {
    // 呼叫函式時的 () 即是呼叫運算子（call operator），可以重載呼叫運算子。
    int operator()(int rhs, int lhs) const { // const 是確保實例不變動，即便呼叫的方法實際上並沒有。
        return rhs + lhs;
    }
};

class Hello {
    public:
        void operator()() { cout << "Hello from Functor" << endl; }
};

class Hello_1 {
        public:
            void operator()(string name) {
                cout << "Hello " << name << " from Functor" << endl;
            }
};

int main() { 
    // plus 稱為函式物件（function object），又稱為函子（functor），
    // 是 Callable 類型，可以像函式一樣地呼叫。
    IntPlus plus; 
    cout << plus(10, 20) << endl;

    Hello hello;
    Hello hello_2;
    hello();
    hello_2();
    

    Hello_1 hello_1;
    Hello_1 hello_3;
    hello_1("david");
    hello_3("??");

    return 0; 
} 