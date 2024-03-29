#include <iostream>
using namespace std;

template <typename T>
class LinkedList {
    class Node {
        public:
            Node(T value, Node *next) : value(value), next(next) {}
            T value;
            Node *next;
    };

    Node *first = nullptr;

    public:
        LinkedList<T>& append(T value);
        T get(int i);
};

template <typename T>
LinkedList<T>& LinkedList<T>::append(T value) {
    Node *node = new Node(value, nullptr);
    if(first == nullptr) {
        this->first = node; 
    }
    else {
        Node *last = this->first;
        while(last->next != nullptr) {
            last = last->next;
        }
        last->next = node;
    }
    return *this;
}

template <typename T>
T LinkedList<T>::get(int i) {
    Node *last = this->first;
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
    LinkedList<int> intLt;
    intLt.append(1).append(2).append(3);
    cout << intLt.get(1) << endl;

    LinkedList<char> charLt;
    charLt.append('a').append('b').append('c');
    cout << charLt.get(2) << endl;

    return 0;
}