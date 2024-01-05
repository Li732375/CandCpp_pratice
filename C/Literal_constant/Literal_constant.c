#include <stdio.h>

int main(){
	
	// 字面常量（Literal constant），指數值(或文字)的預設資料型態 
	// 有以下類別:
	// 整數字面常量， 1、1.0、3.14159 這樣的數值。
	// 浮點數字面常量，如 3.14f，也可以使用科學記號，例如 20000 可以表示為 2e4。 
	// 字元字面常量，如 'A'、'1' 都表示一個字元字面常量。 
	// 字串字面常量，由 char 陣列組成。 
	
	// 整數字面常量可以用 8 進位、10 進位與 16 進位表示，
	// 一般習慣使用 10 進位，如果要使用 8 進位的字面常量，
	// 開頭加上 0 就可以了，如果要使用 16 進位的字面常量，
	// 開頭加上 0x。
	
	// printf 指定格式控制字元 %d 輸出整數時，都會以 10 進位制顯示
	printf("%d\n", 26);
	printf("%d\n", 032);	
	printf("%d\n", 0x1A);
	
	// 可以在整數值之後加上 L 或 l，表示該整數值要是 long 型態，
	// 因為 l 容易與數字 1 搞混，因此常使用 L，例如 1L，也可以指
	// 定為無號整數，可使用 U 或 u 來指定，例如 1U，L 與 U 可以
	// 同時指定，例如 1UL 或 1LU。
	
	// 浮點數的話，則可以在寫下浮點數值時以 F 或 f 表示數值要使
	// 用 float 型態，例如 3.14f，也可以使用科學記號，例如 20000
	// 可以表示為 2e4。
	
	// 常用的轉義序列:
	// \n：換行、新行（newline）
	// \t：水平定位點（horizontal tab）
	// \v：垂直定位點（vertical tab）
	printf("\t以我為頭開始對齊_\v _我是第一列 \n\v第二列_ 第三列就沒有對齊了\n"); // 看來相當空格字元 
	printf("第四列\n"); // \v 目前在這裡沒有實際作用，等同空一格 
	
	// \b：退回一格（backspace）
	// \r：返回（carriage return）
	// \f：換頁（formfeed）
	// \a：嗶聲（alert bell）
	printf("聲音是這裡指示的(跳出警告視窗的聲音)...\a\n\n");
	
	// \\：倒斜線（backslash）
	// \?：問號
	// \'：單引號
	// \"： 雙引號
	// \nnn：nnn 為一到三個 8 進位數字，表示字元編碼，例如 \115
	// \xnn.：nn 為多個 16 進位數字，表示字元編碼，通常用兩個數字，例如 \xb4\xfa，
	// \unnnn：Unicode 碼點 U+nnnn 表示（C99）
	// \Unnnnnnnn：Unicode 碼點 U+nnnnnnnn 表示（C99）
	
	char a; 
	printf("測試無內容字元 a = %c\n\n", a);
	//char b = ''; // [Error] empty character constant
	//printf("測試無內容字元 a=%c, b=%c", a, b);
	  
	char c = '\'';
	//char _c = ''\'; // [Error] empty character constant
	
	printf("單引號字元 %c \n", c);
	printf("\" \062 個 \x48\x45\x4c\x4c\x4f\x21 \" \n");

	// 在 C++ 中如果以 "" 來包括一串文字的話，即為字串字面常數，
	// 例如 "Hello! World!" 就是字串字面常數，字串字面常量由
	// char 陣列組成，多位元組字元使用 char 來儲存碼元（code unit）
	// ，每一個字串最後會以一個 null 字元結束，其他還有 L"..."、
	// u8"..."、u"..."、U"..." 等字面常量，這就等到之後談到字串時一併說明。
	
	return 0;
} 
