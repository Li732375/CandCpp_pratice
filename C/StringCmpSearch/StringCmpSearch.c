#include <stdio.h>
#include <string.h>

const char *orderMax(const char *str_1, const char *str_2); // [Note] previous implicit declaration of 'orderMax' was here

int main(){
	// 比較字串 str1 與 str2 的大小
	
	// 若相同就傳回 0，str1 大於 str2 則傳回大於 0 的值，
	// 小於則傳回小於 0 的值，比較的標準是依字典順序，例
	// 如若 str1 大於 str2，表示 str1 在字典中的順序是在
	//  str2 之後。
	char a[4] = "aaa", b[4] = "baa";
	
	printf("設值 char a[4] = \"aaa\", b[4] = \"baa\"\n");
	printf("陣列 a 與 b 順序誰較大?\n");
	printf("答案是 %s\n", orderMax(a, b)); // strcmp 輸出為整數型態 
	
	return 0;
}

const char *orderMax(const char *str_1, const char *str_2){
	int cmp = strcmp(str_1, str_2);
	
	if(cmp > 0){
		return str_1;
	} 
	else if(cmp == 0){
		return "same"; // [Warning] return makes integer from pointer without a cast
	}
	else {
		return str_2;
	}
	
}
