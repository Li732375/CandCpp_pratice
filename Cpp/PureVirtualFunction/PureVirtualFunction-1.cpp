#include <iostream>
using namespace std;

// 純虛擬函式

// 都想要抽象的 swim，但狀態不同，不如再定義個沒有狀態的類別 Swimmer。
class Swimmer {
    public:
        virtual void swim() = 0;
        virtual ~Swimmer() = default;
};

class Fish : public Swimmer {
    protected:
        string name;

    public:
        Fish(string name) : name(name) {}

        string getName() {
            return this->name;
        }
};

class Anemonefish : public Fish {
    public:
        using Fish::Fish;

        void swim() override {
            cout << "小丑魚 " + this->name + " 游泳" << endl; 
        }
};

class Shark : public Fish {
    public:
        using Fish::Fish;

        void swim() override {
            cout << "鯊魚 " + this->name + " 游泳" << endl; 
        }
};

class Piranha : public Fish {
    public:
        using Fish::Fish;

        void swim() override {
            cout << "食人魚 " + this->name + " 游泳" << endl; 
        }
};

// 臨時額外追加的類別，僅片面函式相同，其餘皆相異
class Human : public Swimmer {
    protected:
        string firstName;
        string lastName;

    public:
        Human(string firstName, string lastName) : 
            firstName(firstName), lastName(lastName) {}

        string getFirstName() {
            return this->firstName;
        }

        string getLastName() {
            return this->lastName;
        }

        void swim() override {
            cout << "人類 " + this->firstName + " " + this->lastName + " 游泳" << endl; 
        }
};

// 臨時額外追加的類別，僅片面函式相同，其餘皆相異
class Submarine : public Swimmer {
    protected:
        string nickName;

    public:
        Submarine(string nickName) : nickName(nickName) {}

        string getNickName() {
            return this->nickName;
        }

        void swim() override {
            cout << "潛水艇 " + this->nickName + " 潛行" << endl; 
        }
};

void doSwim(Swimmer &swimmer) {
    swimmer.swim();
}

int main() { 
    Anemonefish anemonefish("尼莫");
    Shark shark("蘭尼");
    Human human("賈斯汀", "林");
    Submarine submarine("黃色一號");

    doSwim(anemonefish);
    doSwim(shark);
    doSwim(human);
    doSwim(submarine);

    return 0;
}