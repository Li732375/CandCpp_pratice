#include <stdio.h>

int main(){
	// 靜態陣列的宣告方式，事先就決定陣列長度。 
	
	// 在 C99 前，不可以使用變數來事後決定陣
	// 列的長度，如果要動態宣告陣列長度，可
	// 以使用一些資料結構與動態記憶體宣告來
	// 解決陣列大小必須固定的問題。 
	int number[10];    // 宣告 10 個元素的整數陣列
	double score[10];  // 宣告 10 個元素的浮點數陣列
	char ascii[10];    // 宣告 10 個元素的字元陣列
	
	// C99 加入了可變長度的陣列型態（variable length array type），
	// 可以使用變數來指定陣列長度，而變數值
	// 實際上可以是執行時期運算值，在支援的
	// 編譯器下，以下程式碼是可行的。
	
	// 不過 C11 卻將這個功能定為非必要功能，
	// 編譯器實作不一定得支援，然而大多數編
	// 譯器都支援這個功能。 
	int len = 0;
	scanf("輸入陣列指定長度 %d\n", &len);
	int arr[len];
	
	// 宣告陣列之後，陣列所配置到的記憶體空
	// 間中所儲存的數是未知的，所以在初始陣
	// 列元素值之前，當中的元素值是未知的。
	
	// 下面的幾個宣告，整數陣列中的元素都會
	// 被初始為 0，浮點數陣列則會被初始為 0.0，
	// 字元陣列則會被初始為空字元（'\0'），在宣
	// 告陣列時初始陣列元素，可以避免程式存取到
	// 非預期的數值。 
	int number_a[10] = {0};
	double score_a[10] = {0.0};
	char ascii_a[10] = {'\0'};
	
	// 要存取陣列中的值時，可以使用下標（Subscript）運算子 [] 加上索引（Index），指定要存取的陣列元素。 
	// 陣列在使用時，得知陣列長度是必要的，不可以存取超過陣列長度的記憶體，
	// 這會發生無法預期的結果，陣列本身並不知道自己的長度資訊。 
	printf("指定首個元素（number_a[0]）為 %d\n", number_a[0]);
	printf("指定首個元素（score_a[0]）為 %.2lf\n", score_a[0]);
	printf("指定首個元素（ascii_a[0]）為 %c\n", ascii_a[0]);
	
	// 陣列名稱就指向陣列記憶體的第一個位置的位址，而索引值表示所指定的陣列元素，
	// 相對於陣列第一個記憶體位置的位移量（Offset）。 
	int number_b[5] = {0, 1, 2, 3, 4};
    int length = sizeof(number_b) / sizeof(number_b[0]);
	
	//for(int i = 0; i < length; i++){...} // [Error] 'for' loop initial declarations are only allowed in C99 or C11 mode
    int i = 0;
	for(i = 0; i < length; i++) {
        printf("%d ", number_b[i]); 
    }
    printf("\n");
	
	// 只希望初始部分元素
	int number_c[5] = {98, 76}; 
	double weight[5] = {0.0, 0.1}; 
	char ch[5] = {'A', 'B'}; 
	
	// 不可以將陣列直接指定給另一個陣列
	int arr1[5];
	int arr2[5];
	
	// 錯誤！不能直接指定陣列給另一個陣列
	//arr1 = arr2; // [Error] assignment to expression with array type
	
	// 只能循序逐個元素進行複製
	for(i = 0; i < sizeof(arr1); i++) {
		arr1[i] = arr2[i];
	}
	
	return 0;
}
