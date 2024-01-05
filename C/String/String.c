#include <stdio.h>
#include <string.h> // 字串相關 

int main(){
	// 字串就是一串文字，就是是指字元組成的陣列，最後加上一個空（null）字元 '\0'
	char text[] = {'h', 'e', 'l', 'l', 'o', '\0'};
	printf("%s\n", text);
	
	char text_a[] = "hello"; // 雖然沒有指定空字元 '\0'，但是會自動加上空字元
	int length = sizeof(text_a) / sizeof(text_a[0]);
	
	int i = 0;
    for(i = 0; i < length; i++) {
        if(text[i] == '\0') {
            puts("null");
        } else {
            printf("%c ", text_a[i]);
        }
    }
    
    // text 就陣列長度而言會是 6，不過就字串長度而言會是 5
    printf("陣列長度 %d\n", length);
    printf("字串長度 %d\n\n", strlen(text_a)); // strlen 可以取得字串長度
    
    // 使用 scanf 取得使用者輸入的字串時，格式指定字是使用 %s，
	// 而變數前不用再加上 &，因為實際上，字串（字元陣列）變數名
	// 稱本身，即表示記憶體位址資訊。
	char buf[80]; // 輸入的字串長度不得超過 80 個字元（上限包括空字元），因此實際上可以輸入 79 個字元
	
	printf("輸入字串：");
	scanf("%s", buf);
	printf("你輸入的字串為 %s\n\n", buf);
	
	// 指定新的字串值給它時，不能像下面的方式指定
	//char name[80]; 
	//name = "Justin"; // [Error] assignment to expression with array type
	
	// 必須要一個字元一個字元的指定至陣列中，並在最後加上空白字元
	char name[80] = {'\0'}; 
	name[0] = 'J'; 
	name[1] = 'u'; 
	name[2] = 's'; 
	name[3] = 't'; 
	name[4] = 'i';
	name[5] = 'n';
	name[6] = '\0'; 
	puts(name);
	printf("\n");
	
	// 中文字不是一個位元組就可以儲存的資料，因此引發警訊
	
	// [Warning] overflow in implicit constant conversion [-Woverflow]
	// [Warning] multi-character character constant [-Wmultichar]
	//char t = '林'; 
	
	// 需要使用以下的方式
	char text[] = "林"; 
	
	// 若使用 strlen(text) 會得到什麼數字呢？
	// 答案是看你的原始碼編碼是什麼，
	// 如果使用 Big5 撰寫原始碼的話，
	// 答案會是 2，如果使用 UTF-8 撰
	// 寫原始碼的話，答案會是 3。
	
	// char 是用來儲存字元資料，至於存什麼沒有規定，
	// 對於 char text[] = "林" 的情況，應該將 text 
	// 中每個索引位置當成是碼元（code unit），而不
	// 是字元了，因為必須以多個位元組來儲存「林」，
	// 因此這類字元在 C 被稱為多位元組字元（multibyte character），
	// 技術上來說，是用數個 char 組成的一個字元，
	// 如何組成就要看採用哪種編碼。
	
	// 若要固定使用 UTF-8 編碼字串，C11 可以 UTF-8 撰寫原始碼，並在 "" 前置 u8，指定字串使用
	char text_a[] = u8"林";
	printf("字串長度 %d", strlen(text)); // 顯示 3 
	
	// 若不使用 UTF-8 編碼的原始碼，可以使用碼點指定
	char text[] = u8"\u6797";
	printf("字串長度 %d", strlen(text)); // 顯示 3
	
	// 想知道有幾個中文字怎麼辦？
	// 要知道 wchar_t 型態，對應的字元常量是 L'林' 的寫法
	// 稱為擴充字元字面常量（wide character literal），
	// wchar_t 其實是個整數型態，用來儲存碼點，就現今來說，
	// 基本上是指 Unicode。
	wchar_t ch = L'林'; // 也可以寫 L'\u6797'
	printf("%d", ch);   // 顯示 26519

	wchar_t text_b[] = L"良葛格";  // 擴充字元字串（wide-chararater string）
	// wcs 就是 wide-chararater string 的縮寫
    printf("字串長度 %d", wcslen(text_b)); // 顯示 3
    
    // wchar_t 並沒有規定大小，只要求必須容納系統中可以使用的字元
    
    
	
	return 0;
}
