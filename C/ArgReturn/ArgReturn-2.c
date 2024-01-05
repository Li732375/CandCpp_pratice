#include <stdio.h>
#include <stdlib.h>

int* ints(int, int);

int main(){
    // 函式也可以傳回位址，這意味著呼叫者可以對該位址取值或變更，例如下面的程式中，
    //在函式中動態配置連續的 int 空間，並傳回空間的位址
    int size = 0;
    int init = 0;

    printf("陣列大小：");
    scanf("%d", &size);
    printf("元素初值：");
    scanf("%d", &init);    

    int *arr = ints(size, init);
    for(int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    free(arr);

    return 0;
}

// 由於使用動態配置的方式，被配置的空間在函式執行過後，不會自動清除，
// 可以直接傳回位址給呼叫者。
int* ints(int size, int init) {
    int *arr = malloc(size * sizeof(int));
    for(int i = 0; i < size; i++) {
        arr[i] = init;
    }
    return arr;
}

// 如果是底下範例，陣列空間會在函式執行完後清除，編譯器會提出警訊，
// 傳回指標值也就沒有意義，也會造成存取錯誤。
// (註:並未於主程式 main() 之中呼叫)
int* ints2(int size, int init) {
    int arr[size];
    for(int i = 0; i < size; i++) {
        arr[i] = init;
    }
    return arr; // [warning]: function returns address of local variable
}