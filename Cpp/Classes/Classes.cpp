#include <iostream>
using namespace std;

class IntLinkedList {
    class IntNode {
        public:
            IntNode(int value, IntNode *next) : value(value), next(next) {}
            int value;
            IntNode *next;
        };

    IntNode *first = nullptr;

    public:
        IntLinkedList& append(int value);
        int get(int i);
};
// 內部類別也可以獨立於外部類別定義。
/*
class IntLinkedList {
    class IntNode;
    IntNode *first = nullptr;

    public:
        IntLinkedList& append(int value);
        int get(int i);
};

class IntLinkedList::IntNode {
    public:
        IntNode(int value, IntNode *next) : value(value), next(next) {}
        int value;
        IntNode *next;
};
// IntNode 的值域是 public，這是為了便於給外部類別取用 IntNode 的值域，
// 因為內部類別中若有 private 成員，外部類別預設也是不可存取的。
*/

// append 以 new 的方式建構了 IntNode 實例，應該要有個解構式，
// 在不需要 IntLinkedList 時，將這些動態建立的 IntNode 清除。
IntLinkedList& IntLinkedList::append(int value) {
    IntNode *node = new IntNode(value, nullptr);
    if(first == nullptr) {
        this->first = node; 
    }
    else {
        IntNode *last = this->first;
        while(last->next != nullptr) {
            last = last->next;
        }
        last->next = node;
    }
    return *this;
}

int IntLinkedList::get(int i) {
    IntNode *last = this->first;
    int count = 0;
    while(true) {
        if(count == i) {
            return last->value;
        }
        last = last->next;
        count++;
    }
}

int main() {
    IntLinkedList lt;

    lt.append(1).append(2).append(3);
    cout << lt.get(1) << endl;

    return 0;
}