#include <stdio.h>

#include <stdlib.h>

int main(){
	// 若要動態配置連續空間，並當成二維陣列來操作，
	// 記得二維（或多維）陣列，就是以陣列的陣列來實
	// 作。
	int **arr = calloc(2, sizeof(int*));

	// 現在 arr[0]、arr[1] 可以分別儲存動態配置 int* 空間的位址，
	// 若每段要模擬的一維陣列的長度是 3 (陣列元素個數)，可以如下動
    // 態配置，並將模擬的一維陣列每個元素初始設為 0。
	for(int i = 0; i < 2; i++) {
    	arr[i] = calloc(3, sizeof(int));
	}
    
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        putchar('\n');
    }

    for(int i = 0; i < 2; i++) {
        free(arr[i]);
    }
    free(arr); 

	return 0;
} 
