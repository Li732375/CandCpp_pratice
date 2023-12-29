#include <stdio.h>

int main(){
	// 陣列索引其實是相對於首元素位址的位移量。
	//int LEN = 10, arr2[LEN] = {0}; // [Error] variable-sized object may not be initialized
    int LEN = 10, arr2[LEN];
	int *p = arr2;
	
	int i = 0;
	for(i = 0; i < LEN; i++) {
    	printf("&arr2[%d]: %p", i ,&arr2[i]);
        printf("\tptr + %d: %p\n", i, p + i);
    }
    printf("\n");
	
	return 0;
} 
