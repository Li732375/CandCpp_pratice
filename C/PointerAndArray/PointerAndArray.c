#include <stdio.h>

int main(){
	// 宣告陣列之後，使用到陣列變數時，會取得首元素的位址。
	int arr[10] = {0};
	
	// 陣列 arr 與 &arr[0] 的值是相同的。 
    printf("arr :\t\t%p\n", arr);
    printf("&arr[0] :\t%p\n\n", &arr[0]); 
	
	// 每個陣列元素的位址型態是 int*，這表示對它進行運算時，
	// 是以 int 長度為單位，而 arr 變數的位址處就是陣列資料
	// 的開端，&arr 型態會是 int (*)[5]，5 即陣列長度。 
	int arr1[] = {10, 20, 30, 40, 50}; 
	int len = *(&arr1 + 1) - arr1;
	int *p = arr1;
	
	printf("*&arr1 值為 %d\n", *&arr1);
	printf("&arr1 值為 %d\n", &arr1);
	printf("arr1 + 1 值為 %d\n", arr1 + 1); // 直接運算 
	printf("&arr1 + 1 值為 %d\t=> 特別注意這行\n", &arr1 + 1); // 取址後再運算，特別注意 
	printf("*(&arr1 + 1) 值為 %d\n", *(&arr1 + 1));
	printf("arr1 值為 %d\n", arr1);
	printf("arr1 的長度為 %d\n\n", len);
	
	printf("int *p = arr1;\n");
	printf("p 值為 %d\n", p);
	printf("p + 1 值為 %d\n", p + 1); // 直接運算
	// 由於該指標變數僅保留陣列 arr1 頭個元素的位址，不代表整個陣列。 
	printf("&p + 1 值為 %d\n", &p + 1); // 意義同上 
	printf("*(&p + 1) 值為 %d\n\n", *(&p + 1)); // 取首個元素的數值 
	
	
	int i = 0;
    for(i = 0; i < len; i++) {
    	printf("&arr1[%d] 值為 %d", i, &arr1[i]);
    	printf("\t&arr1[%d]: %p", i ,&arr1[i]);
        printf("\tptr + %d: %p\n", i, p + i);
    }
    printf("\n");
    
    
	return 0;
}
