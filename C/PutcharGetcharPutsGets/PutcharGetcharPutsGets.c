#include <stdio.h>

int main(){
	
	// 只想取得使用者輸入的字元，則可以使用 getchar，
	// 它直接取得使用者輸入的字元並傳回，如果只想輸出
	// 一個字元，則也可以直接使用 putchar。 
	char c;
	
	printf("請輸入一個字元：");
	c = getchar();
	
	putchar(c);
	putchar('\n');
	putchar('\n');
	
	// 如果想取得使用者輸入的整個字串，
	// 過去可以使用 gets，它會取得
	// 使用者的輸入字串，不包括按下 Enter 
	// 的換行字元碼。 
	
	// 而想要輸出整個字串，也可以直接使用
	//  puts()，它在輸出字串後，會直接進行換行。
	char str[20];

    puts("請輸入字串：");
    // 無法知道字元陣列的大小，而是依賴換行符號或 EOF 才會結束輸入。
	// 有可能引發緩衝區溢位的安全問題。 
    gets(str); // [warning] the `gets' function is dangerous and should not be used.

    puts("輸入的字串為：");
    puts(str);
    
    
    // 從 C11 之後，gets 已經不再是標準函式之一，
	// 可以使用 fgets 來取代 get。 
    char buf[20];

    puts("請輸入字串：");
    fgets(buf, sizeof(buf), stdin); // 必須指定字元陣列、大小以及 stdin。

    puts("輸入的字串為：");
    puts(buf);
    
    
	return 0;
} 
