#include <stdio.h>

int main(){
	
	// printf() 就是將指定的文字、數值等輸出至螢幕上，並且執行過後會傳回所輸出的字元數。
	int count = printf("hello world!\n");
	printf("這句長度為 %d (包含字串字尾的 \\0)\n\n", count);
	
	// 在控制台執行程式時使用 >> 將輸出結果導向至指定檔案，例如（假設編
	// 譯後的可執行檔名為 PrintfScanf）
	
	//PrintfScanf >> result.txt;
	
	// 要重新導向標準輸出是用 >,標準輸入則是 <，而 >> 除了重導標準輸出，
	// 還有附加的功能，也就是會把輸出附加到被導向的目標檔案後頭，如果目
	// 標檔案本來不存在，那麼效果就和 > 一樣。
	
	// 在使用 printf 時要指定整數、浮點數、字元等進行顯示，要配合格式指
	// 定字（format specifier），以下列出幾個可用的格式指定碼：

	// %c：以字元方式輸出
	// %d：10 進位整數輸出
	// %o：以 8 進位整數方式輸出
	// %u：無號整數輸出
	// %x、%X：將整數以 16 進位方式輸出
	// %e、%E：使用科學記號顯示浮點數
	// %g、%G：浮點數輸出，取 %f 或 %e（%f 或 %E），看哪個表示精簡
	// %%：顯示 %
	// %s：字串輸出
	// %lu：long unsigned 型態的整數
	// %p：指標型態
	
	printf("顯示字元 %c\n", 'A');
    printf("顯示字元編碼 %d\n", 'A');
    printf("顯示字元編碼 %c\n", 65);
    printf("顯示十進位整數 %d\n", 15);
    printf("顯示八進位整數 %o\n", 15);
    printf("顯示十六進位整數 %X\n", 15);
    printf("顯示十六進位整數 %x\n", 15);
    printf("顯示科學記號 %E\n", 0.001234);
    printf("顯示科學記號 %e\n\n", 0.001234);
    
    // %f：浮點數輸出
    printf("example:%f\n", 19.234);
	printf("example:%.2f\n", 19.234); // .2 指定小數點後取兩位
	
	// 整數 6 表示預留 6 個字元寬度，由於
	// 預留了 6 個字元寬度，不足的部份要
	// 由空白字元補上。 

	// （19.23共佔五個字元，所以在前端補上一個空白）
	printf("example:%6.2f\n", 19.234); 
	printf("example:%4.f\n", 19.234); 

	// 若在 % 之後指定負號，例如 %-6.2f，
	// 表示靠左對齊，沒有指定則靠右對齊。
	// = 僅作凸顯效果用。 
	printf("example:=%6.2f=\n", 19.234);
    printf("example:=%-6.2f=\n\n", 19.234);
	
	// * 將被之後的第一個引數所取代，所以
	// 第一個 printf() 將預留一個字元寬度。 
	printf("%*d\n", 1, 1);
	printf("%*d\n", 2, 1); 
    printf("%*d\n\n", 3, 1);
    
    printf("%.*f\n", 2, 1.5);// 效果同 .2 
    printf("%*f\n\n", 2, 1.5); // 浮點數無效
    
    // 字串的話，也可以使用 %.*s，這表示要
	// 顯示字串中 0 到多個字元，實際的字元
	// 數可以在第二個參數指定。
	printf("%.*s\n", 3, "Justin");
    printf("%.*s\n", 5, "Justin");
    printf("%.*s\n\n\n", 7, "Justin");
	
	
	// 在程式中先宣告了一個整數變數 input，
	// 使用 scanf() 函式時，若輸入的數值為
	// 整數，則使用格式指定字 %d，若輸入的
	// 是其他資料型態，則必須使用對應的格
	// 式指定字。 
	// 如果是 double，特別注意要使用 %lf 來
	// 指定。 
	int number1, number2;

    printf("請輸入兩個數字，中間使用空白區隔）："); // 指定了使用空白來區隔兩個輸入
    scanf("%d %d", &number1, &number2);
    printf("你輸入的數字：%d %d\n", number1, number2);

    printf("請再輸入兩個數字，中間使用-號區隔）："); // 指定了使用 - 來區隔兩個輸入
    scanf("%d-%d", &number1, &number2);
    printf("你輸入的數字：%d-%d\n\n", number1, number2);
	
	// scanf 可以指定可接受的字元集合。
	 
	// 字串是字元陣列，而且最後一個元素必須是空字元 。
	
	// 收到的字元若超出 buf，稱為緩衝區溢位（buffer overflow），
	// 會發生不可預期的結果，甚至成為安全弱點。 
	char buf[50]; // 長度為 50，輸入的字元最多只能是 49 個。 

    printf("請輸入 1 到 5 的字元：");
    // scanf 函式連續讀入符合集合的字元並放到字元陣列中，
	// 直到讀到不符合的字元為止，剩下的字元仍會存在輸入緩
	// 衝區中。 
    scanf("%[1-5]", buf); // 只想接受 1 到 5 的字元
    printf("輸入的字元為 %s\n\n", buf); // 陣列名稱本身就有位址資訊，故不用 & 來取址，之後會再看到

    fflush(stdin); // 清除輸入緩衝區

    printf("請輸入 XYZ 任一字元：");
    scanf("%[XYZ]", buf);
    printf("\n輸入的字元為 %s\n\n", buf);
    
    // 可以使用 %[0-9] 指定取得 0 至 9 的字元，
	// 使用 %[A-z] 指定取得 ASCII 表中的 A 到 z 的字元。
	
	// 如果要排除的話，則使用 ^，例如 %[^ABC] 可取得 ABC 字元以外的所有字元。
	
	
	// 預防的方法之一是，限定 scanf 每次執行可以接受的最大字元數。
	char buf_1[10];

    printf("請輸入字串：");
    scanf("%9s", buf_1);
    printf("\n輸入的字串：%s\n\n", buf_1);
    // 若輸入的字元超過 9，buf 也只會收到 9 個字元加上一個空字元，超過的字元會留在輸入緩衝區。
    // 另一個預防輸入超過 buf 長度的方式，是使用 fgets，
	// 可以參考〈putchar、getchar、puts、fgets〉的說明。
    
	return 0;
} 
