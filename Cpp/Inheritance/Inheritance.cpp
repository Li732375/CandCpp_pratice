#include <iostream>
#include <string> 
using namespace std;

class Role {
    string name;   // 角色名稱
    int level;     // 角色等級
    int blood;     // 角色血量

    public:
        Role(string name, int level, int blood): 
            name(name), level(level), blood(blood) {}

        string to_string() {
            return "(" + 
                this->name + ", " + 
                std::to_string(this->level) + ", " + 
                std::to_string(this->blood) + 
            ")";
        };
};

// public 表示，會以公開的方式繼承 Role，這表示繼承而來的 Role 成員，
// 權限控制最大是 public，也就是 Role 繼承而來的相關成員維持既有的權限控制。

// 繼承類別時，還可以在 : 右邊指定 protected 或 private，表示繼承而來的 Role 
// 成員權限控制最大是 protected 或 private，例如若 : 右邊指定 private，Role 
// 的 protected 或 public 成員在子類中，權限就會被限縮為 private。
class SwordsMan : public Role {
    public:
        SwordsMan(string name, int level, int blood) : Role(name, level, blood) {}

        void fight() {
            cout << "揮劍攻擊" << endl;
        }
};
// 繼承時設定的權限預設會套用至各個成員，然而，可以使用 using 
// 指出哪些成員要維持父類中設定之權限。
/*
class D : private P {
public:
    using P::publicMember;    // 維持 public

protected:
    using P::protectedMember; // 維持 protected
};
*/

// public 表示，會以公開的方式繼承 Role，這表示繼承而來的 Role 成員，
// 權限控制最大是 public，也就是 Role 繼承而來的相關成員維持既有的權限控制。
class Magician : public Role {
    public:
        Magician(string name, int level, int blood) : Role(name, level, blood) {}

        void fight() {
            cout << "魔法攻擊" << endl;
        }

        void cure() {
            cout << "魔法治療" << endl;
        }
};

int main() { 
    SwordsMan swordsMan("Justin", 1, 1000);
    Magician magician("Magician", 1, 800);

    swordsMan.fight();
    magician.fight();
    magician.cure();

    cout << "SwordsMan" << swordsMan.to_string() << endl;
    cout << "Magician" << magician.to_string() << endl;

    return 0;
}