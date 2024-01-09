#include <stdio.h>

typedef struct {
    // union 只會選擇佔用空間最大的資料型態作儲存。
    union { // 匿名結構
        // 有些結構的實例，可能包含不同型態的成員，
        // 然而，在某個時間點上，只會有一個成員是有
        // 效的。
        char cvalue;
        int ivalue;
        double dvalue;
    } value; // 還是需要透過別名間接存取。

    // enum 則會將列舉的元素（與資料型態無關）如同陣列般依序個別儲存。
    enum {CHAR, INT, DOUBLE} type;
} Head;

void readChar(Head *head, char cvalue) {
    head->value.cvalue = cvalue;
    head->type = CHAR;
}

void readInt(Head *head, int ivalue) {
    head->value.ivalue = ivalue;
    head->type = INT;
}

void readDouble(Head *head, double dvalue) {
    head->value.dvalue = dvalue;
    head->type = DOUBLE;
}

void print(Head *head) {
    switch(head->type) {
        case CHAR:
            printf("%c\n", head->value.cvalue);
            break;
        case INT:
            printf("%d\n", head->value.ivalue);
            break;
        case DOUBLE:
            printf("%i\n", head->value.dvalue);
            break;
    }
}

int main() { 
    Head head;

    readInt(&head, 11);
    print(&head);

    readChar(&head, 'S');
    print(&head);

    return 0; 
}