#include <stdio.h>

// 與 union-1.c 比較

typedef struct {
    char cvalue;
    int ivalue;
    double dvalue;

    enum {CHAR, INT, DOUBLE} type;
} Head;

void readChar(Head *head, char cvalue) {
    head->cvalue = cvalue;
    head->type = CHAR;
}

void readInt(Head *head, int ivalue) {
    head->ivalue = ivalue;
    head->type = INT;
}

void readDouble(Head *head, double dvalue) {
    head->dvalue = dvalue;
    head->type = DOUBLE;
}

void print(Head *head) {
    switch(head->type) {
        case CHAR:
            printf("%c\n", head->cvalue);
            break;
        case INT:
            printf("%d\n", head->ivalue);
            break;
        case DOUBLE:
            printf("%i\n", head->dvalue);
            break;
    }
}

int main() { 
    Head head;

    readInt(&head, 10);
    print(&head);

    readChar(&head, 'A');
    print(&head);

    return 0; 
}