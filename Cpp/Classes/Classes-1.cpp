#include <iostream>
#include <string>
using namespace std;

// 有時候，內部類別會是 public，不想公開某些值域，
// 又想允許外部類別存取內部類別的 private 值域，就
// 可以宣告外部類別是內部類別的朋友。
class Screen {
    public:
        class Pixel {
            int x;
            int y;
            friend Screen;  // 朋友類別
            // 被 friend 修飾的對象並不是類別成員的一部份，單純是種存取控制。

            // 被 friend 修飾的對象可以是類別、函式或者是另一類別的方法。
        public:
            Pixel(int x, int y) : x(x), y(y) {}
        };

    string info(Pixel px) {
        return "Pixel(" + to_string(px.x) + ", " + to_string(px.y) + ")";
    }
};

int main() {
    Screen screen;
    Screen::Pixel px(10, 10);
    cout << screen.info(px) << endl;

    return 0;
}