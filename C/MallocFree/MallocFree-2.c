#include <stdio.h>

#include <stdlib.h>

int main(){
	// 每段模擬的一維陣列長度當然可以不一樣
    int **arr = calloc(2, sizeof(int*));
    arr[0] = calloc(3, sizeof(int));
    arr[1] = calloc(5, sizeof(int));

    for(int j = 0; j < 3; j++) {
        printf("%d ", arr[0][j]);
    }
    putchar('\n');

    for(int j = 0; j < 5; j++) {
        printf("%d ", arr[1][j]);
    }
    putchar('\n');    

    for(int i = 0; i < 2; i++) {
        free(arr[i]);
    }
    free(arr); 

	return 0;
} 
