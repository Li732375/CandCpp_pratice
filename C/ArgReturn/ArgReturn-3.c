#include <stdio.h>

// 當然，這就寫死了長度資訊。
void printInts(int arr[5]) {
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 另一個方式是指定長度。

// 因為 C99 以後，多數編譯器支援可變長度的陣
// 列型態（variable length array type），
// 而記得 len 參數必須先出現，編譯器看到後才
// 能用於後續參數。
void printInts_1(int len, int arr[len]) {
    for(int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 由於 C11 將可變長度的陣列型態標示為非必要功能，
// 如果編譯器真的不支援，可以使用傳遞陣列位址的方
// 式。
void printInts_2(int len, int *arr) {
    for(int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void){
    // 如果要傳遞陣列給函式，方式之一是明確宣告陣列型態，這必須包含陣列長度
    int arr[] = {1, 2, 3, 4, 5};

    printInts(arr);
    printInts_1(5,arr);
    printInts_2(5, arr);

    // int[] 轉型是必要的，編譯器需要這項資訊知道這是個 int 陣列。
    printInts_2(5, (int[]) {5, 4, 3, 4, 5});

    return 0;
}