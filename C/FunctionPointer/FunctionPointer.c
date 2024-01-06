#include <stdio.h>
#include <stdbool.h>

void sort(int*, int, bool (*compare)(int, int));
bool ascending(int, int);
bool descending(int, int);

int main(void){
    // 函式在記憶體中也佔有一個空間，
    // 將函式名稱作為指定來源時，函式
    // 名稱會自動轉為指標，型態由傳回
    // 值型態與參數列決定。

    // 傳回值型態 (*名稱)(參數列);
    
    int number[] = {3, 5, 1, 6, 9};

    sort(number, 5, ascending);
    // 顯示 1 3 5 6 9
    for(int i = 0; i < 5; i++) {
        printf("%d ", number[i]);
    }
    putchar('\n');

    sort(number, 5, descending);
    // 顯示 9 6 5 3 1
    for(int i = 0; i < 5; i++) {
        printf("%d ", number[i]);
    }
    putchar('\n');

    return 0; 
} 

void swap(int *a, int *b) {
    int t = *a; 
    *a = *b; 
    *b = t;
}

void sort(int* arr, int length, bool (*compare)(int, int)) { 
    for(int flag = 1, i = 0; i < length - 1 && flag == 1; i++) { 
        flag = 0; 
        for(int j = 0; j < length - i - 1; j++) { 
            if(compare(arr[j + 1], arr[j])) { 
                swap(&arr[j + 1], &arr[j]); 
                flag = 1; 
            } 
        } 
    } 
}

bool ascending(int a, int b) {
    return a < b;
}

bool descending(int a, int b) {
    return a > b;
}

// https://openhome.cc/Gossip/CGossip/FunctionPointer.html