#include <stdio.h>

int main(){
	// C 風格字串，本質上就是字元陣列，而陣列名稱具有指標性質，可以如下建立字串。 
	char *text1 = "hello";
	
	// text 儲存了字串常量的位址值，字串常量建立的內容是唯讀的。 
	// 如果試圖透過 text1 改變字元，會發生不可預期的結果。
	//text1[0] = 'H'; //雖然不會報錯，但因該行執行異常，且回傳值也異常，導致後面內容無法執行 
	//printf("%s", text1);
	
	// 對於字面常量，建議加上 const
	// 這樣一來，若試圖透過 text4 改變字元，編譯器會失敗，從而避免了執行時期的錯誤。
	const char *text4 = "hello";
	
	// 上述方式中，text1 只是個型態為 const char* 的指標，與以下不同。
	// 底下建立的 text 內容並不是唯讀的，因為 text 是個陣列。
	char text2[] = "hello";
	
	// 對於 wchar_t 等其他為了支援 Unicode 的型態，都有這類特性。
	
	// 無論是哪個形式，都可以傳遞位址
	const char *text = text2;
	text = text4;
	
	// 但這樣就不行了
	char *text3 = text2;
	//text3 = text4; // [error]: invalid conversion from 'const char*' to 'char*' 
	
	// 如果真的想通過編譯，就必須明確告訴編譯器，你要去除 const 修飾。
	text = (char*) text4; // 強制去除 const
	
	
	// 建立字串陣列
	const char *names[] = {"Just", "Moni", "Ire"};
	
	int i = 0;
    for(i = 0; i < 3; i++) {
        const char *name = names[i];
        printf("%s\n", name);
    }
	
	// 留意一下底下的不同
	const char *names1[] = {"Justin", "Monica", "Irene"}; // 每個元素儲存了各個字串常量的位址值
	char names2[][10] = {"Justin", "Monica", "Irene"}; // 三個長度為 10 的 char 陣列，並複製各個字串常量的 char
	
	
	return 0;
} 
