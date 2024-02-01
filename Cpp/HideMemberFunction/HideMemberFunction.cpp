#include <iostream>
#include <string> 
using namespace std;

// 想要 SwordsMan、Magician 各自的 to_string，可以有類別名稱作為前置，
// 這個需求可以藉由在各自的類別中定義 to_string 來達成。
class Role {
    string name;   // 角色名稱
    int level;     // 角色等級
    int blood;     // 角色血量

    public:
        Role(string name, int level, int blood)
        : name(name), level(level), blood(blood) {}

        // 父類的 to_string 定義將被子類同名函式（方法）遮蔽（hide）。
        string to_string() {
            return "(" + 
                this->name + ", " + 
                std::to_string(this->level) + ", " + 
                std::to_string(this->blood) + 
            ")";
        };
};

class SwordsMan : public Role {
    public:
        using Role::Role;

        void fight() {
            cout << "揮劍攻擊" << endl;
        }

        // 父類的 to_string 定義被遮蔽（hide）。
        string to_string() {
            return "SwordsMan" + Role::to_string();
        };
};

class Magician : public Role {
    public:
        using Role::Role;

        void fight() {
            cout << "魔法攻擊" << endl;
        }

        void cure() {
            cout << "魔法治療" << endl;
        }

        // 父類的 to_string 定義被遮蔽（hide）。
        string to_string() {
            return "Magician" + Role::to_string();
        };
};

int main() { 
    SwordsMan swordsMan("Justin", 1, 1000);
    Magician magician("Magician", 1, 800);

    swordsMan.fight();
    magician.fight();
    magician.cure();

    cout << swordsMan.to_string() << endl; // 父類的 to_string 定義被遮蔽（hide）。
    cout << magician.to_string() << endl; // 父類的 to_string 定義被遮蔽（hide）。

    Role &role = swordsMan;
    cout << role.to_string() << endl; // 顯示 (Justin, 1, 1000)

    return 0;
}