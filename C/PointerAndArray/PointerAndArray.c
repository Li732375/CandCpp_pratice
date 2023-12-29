#include <stdio.h>

int main(){
	// 宣告陣列之後，使用到陣列變數時，會取得首元素的位址。
	int arr[10] = {0};
	
	// 陣列 arr 與 &arr[0] 的值是相同的。 
    printf("arr :\t\t%p\n", arr);
    printf("&arr[0] :\t%p\n\n", &arr[0]); 
	
	// 
	int arr1[] = {10, 20, 30, 40, 50}; 
	int len = *(&arr1 + 1) - arr1;
	printf("arr1的長度為 %d\n\n", len);

	// 陣列索引其實是相對於首元素位址的位移量。
	//int LEN = 10, arr2[LEN] = {0}; // [Error] variable-sized object may not be initialized
    int LEN = 10, arr2[LEN];
	int *p = arr2;
	
	int i = 0;
    for(i = 0; i < LEN; i++) {
        printf("&arr2[%d]: %p", i ,&arr2[i]);
        printf("\t\tptr + %d: %p\n", i, p + i);
    }
    printf("\n");
    
    
	return 0;
}
