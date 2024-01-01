#include <stdio.h>
#include <string.h>

int main(){
	// 要得知字串所含字元長度（不包括空字元），則可以使用 strlen 函數 
	
	// size_t 是 unsigned 型態，在大部份系統是定義為 unsigned int，
	// 但在 64 位元系統中可以是 unsigned long。
	char buf[80];

    puts("請輸入字串...");
    scanf("%s", buf);

    size_t length = strlen(buf); // strlen 會傳回字元陣列中第一個字元至空字元的長度值減 1
    printf("buf 字串長度：%lu\n\n", length);
    
    fflush(stdin); // 清除輸入緩衝區
    
    puts("請輸入字串...");
    scanf("%s", buf);
    
	// 使用 fgets 的話，要注意它會包括最後按下 Enter 的換行字元。 
    fgets(buf, sizeof(buf) / sizeof(buf[0]), stdin);
    
    length = strlen(buf); // strlen 會傳回字元陣列中第一個字元至空字元的長度值減 1
    printf("buf 字串長度：%lu\n\n", length);
	
	
	int len = 20;
	char buf_a[len];

    puts("請輸入名稱...");
    // fgets 會包括 enter 字元
    fgets(buf_a, len, stdin);
    
	// 要進行字串複製，可以使用 strcpy 函式
	int lenOfName1 = strlen(buf_a) + 1;
    char name1[lenOfName1];
    
    strcpy(name1, buf_a);
    printf("name1 名稱：%s\n", name1);
	
	// 不複製換行字元
    int lenOfName2 = lenOfName1 - 1;
    char name2[lenOfName2];
    
    // 設定全部字元為空字元
    memset(name2, '\0', lenOfName2);
    
    // 複製字串中若干字元內容，可以使用 strncpy
    strncpy(name2, buf_a, lenOfName2); // strncpy 不會自動在目的陣列加上空字元
    printf("name2 名稱：%s\n\n", name2);
    
    
    // 要串接兩個字串，則要使用 strcat
    char str1[] = "xyz";
    char str2[] = "abc";

    int lent = strlen(str1) + strlen(str2) + 1;
    char concated[lent];
    memset(concated, '\0', lent); // memset 函式將全部字元設為空字元

    strcat(concated, str1);
    strcat(concated, str2);
    // 串接部份字串，可以使用 strncat
    // strncat(concated, str1);

    printf("串接後：%s\n", concated);
	
	return 0;
} 
