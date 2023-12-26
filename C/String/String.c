#include <stdio.h>
#include <string.h> // 字串相關 

int main(){
	// 字串就是一串文字，就是是指字元組成的陣列，最後加上一個空（null）字元 '\0'
	char text[] = {'h', 'e', 'l', 'l', 'o', '\0'};
	printf("%s\n", text);
	
	char text_a[] = "hello"; // 雖然沒有指定空字元 '\0'，但是會自動加上空字元
	int length = sizeof(text_a) / sizeof(text_a[0]);

    for(int i = 0; i < length; i++) {
        if(text[i] == '\0') {
            puts("null");
        } else {
            printf("%c ", text_a[i]);
        }
    }
    
    // text 就陣列長度而言會是 6，不過就字串長度而言會是 5
    printf("陣列長度 %d\n", length);
    printf("字串長度 %d", strlen(text_a)); // strlen 可以取得字串長度
    
    // 使用 scanf 取得使用者輸入的字串時，格式指定字是使用 %s，
	// 而變數前不用再加上 &，因為實際上，字串（字元陣列）變數名
	// 稱本身，即表示記憶體位址資訊。
	char buf[80]; // 輸入的字串長度不得超過 80 個字元（上限包括空字元），因此實際上可以輸入 79 個字元
	
	printf("輸入字串：");
	scanf("%s", buf);
	printf("你輸入的字串為 %s\n", buf);
	
	
	
	return 0;
}
