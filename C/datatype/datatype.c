#include <stdio.h>
#include <stdlib.h>

#include <stdbool.h>

int main(){
	printf("型態大小\t\t(bytes)\n"); //（\t）為一次 tab 效果。 
	
	printf("short\t\t\t%lu\n", sizeof(short)); //（sizeof()）顯示佔用的記憶體，單位為 bytes。 
	// %lu 為格式指定碼，表示該位置將放置一個 long unsigned 型態的整數，
	// 也就是由 sizeof() 所計算出來的數字取代。 
	// 若 %lu 不可用，暫時採用 %d。 
	
	printf("int\t\t\t%lu\n", sizeof(int)); 
	printf("long\t\t\t%lu\n", sizeof(long));
	// 在不同編譯器上，配置的記憶體長度並不完全相同，故容納大小也不同。 
	
	// 在 64 位元 Ubuntu 16.04 中的 gcc 編譯器下，int 與 long 為 8 位元組，
	// 在 Windows 10 使用 MinGW-w64，GNU 編譯器版本是 8.1.0 型態的話，
	// int 與 long 為 4 位元組，長度越長，表示可表示的整數值範圍越大。
	
	printf("unsigned int\t\t%lu\n\n", sizeof(unsigned int));
	// 可以使用 signed、unsigned 宣告有號、無號整數，無號整數最左邊位元不用
	// 來表示正負號，例如一個 8 位元字元被用來表示整數時，可以表示數值 -128
	// 到 127，而一個無號字元可以表示 0 到 255 的正整數。
	
	printf("float\t\t\t%lu\n", sizeof(float));
	printf("double\t\t\t%lu\n", sizeof(double));
	printf("long double\t\t%lu\n", sizeof(long double));
	printf("char\t\t\t%lu\n\n", sizeof(char));
	
	printf("bool\t\t\t%lu\n", sizeof(bool));
	// 註解掉行 4 的 #include <stdbool.h> 後，這裡將不可執行 
	// [Error] 'bool' undeclared (first use in this function)
	
	// C 語言一開始並沒有布林值型態，而是將零值或 NULL 視為不成立，
	// 其他值都是成立，C99 有 bool 名稱，定義於 stdbool.h，用來表示
	// 布林數，是 C99 布林型態 _Bool 的巨集（也就是會編譯後會展開為
	//  _Bool），在程式中佔一個位元組。 
	
	
	return 0;
} 
