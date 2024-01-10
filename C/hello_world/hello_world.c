#include <stdio.h> // 巨集（Macro）前置處理器指令（Preprocessor directive）
// 告訴編譯器（Compiler）這個程式會用到 stdio.h 這個標頭檔（Header file）
// 定義的函式（Function），以便正確地編譯程式中使用到的程式庫函式。

// 表示將含括的檔案插入目前原始碼之中。

// 在 terminal 使用 gcc 的話，可以指定 -E 表示只進行前置處理
// gcc -E hello_world.c -o hello_world.i
// 開啟 main.i 的話，你會發現在 main 函式定義之前，安插了 stdio.h 的內容。 

int main() // 程式的進入點（Entry point）
{
	printf("hello world！\n"); // 每一個陳述（Statement）結束都必須使用分號（;）
	printf("hello ");
	printf("world\n"); // 加入（\n）換行 
	printf("！");
	
	printf("\"初學習 C 語言\"！"); // 加入（\"） 跳脫顯示 
	
	return 0;
	// 在 C99/C11 之後，如果沒有在最後撰寫 return 0，預設就是傳回 0
} 
