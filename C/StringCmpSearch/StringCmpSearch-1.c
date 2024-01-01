#include <stdio.h>
#include <string.h>


int main(){
	// 搜尋字串的相關函式
	
	// 第一個參數是被搜尋字串，第二個參數是想要搜尋的子字串，
	// 如果沒找到子字串則傳回 NULL，如果搜尋到第一個符合的子
	// 字串，則傳回符合位置的指標。
	int LEN = 80; 
	char source[LEN];
    char search[LEN];

    printf("輸入字串：");
    fgets(source, LEN, stdin);

    printf("搜尋子字串：");
    fgets(search, LEN, stdin);

    // 去除最後的換行字元
    search[strlen(search) - 1] = '\0';
	
	
    char *loc = strstr(source, search);

    if(loc == NULL) {
        printf("找不到符合的子字串\n");
    }
    else {
    	// 要得知子字串是在哪一個索引位置，則可以利用該指標減去
		// 字串（字元陣列）開頭的指標，得到的位移量即為符合的索
		// 引位置。 
        printf("在索引位置 %lu 處找到子字串\n", loc - source);
    } 
	
	return 0;
}
