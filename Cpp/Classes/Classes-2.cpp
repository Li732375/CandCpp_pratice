#include <iostream>
using namespace std;

int main() {
    // 類別也可以在定義在函式之中，也就是區域類別，
    // 主要用來臨時封裝一組資料，然而，不可以存取函
    // 式中的區域變數。
    class Point {
        public:
            Point(int x, int y) : x(x), y(y) {}
            int x;
            int y;
    };

    Point p1(10, 10);
    Point p2(20, 20);

    // 必要時，區域類別也可以匿名，也就是匿名類別。

    // const 是必要的，因為類別中出現的 dx、dy 實際上並不是外部的 dx、dy。
    const int dx = 10;
    const int dy = 20;

    class {
        public:
            int x = dx;
            int y = dy;
    } p;

    cout << p.x << endl;

    return 0;
}