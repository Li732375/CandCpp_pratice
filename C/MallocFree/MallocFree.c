#include <stdio.h>

#include <stdlib.h>

int main(){
	// 變數建立後會配置記憶體空間，這類資源是配置在記憶體的堆疊區（Stack），
	// 生命週期侷限於函式執行期間，也就是函式執行過後，配置的空間就會自動清除。
	
	// 若要將函式執行結果傳回，不能直接傳回這類被自動配置空間的位址，因為函式
	// 執行過後，該空間就會釋出，函式呼叫者後續若透過位址取用這些資源，會發生
	// 不可預期的結果。如，不能直接將區域建立的變數位址或陣列位址傳回。

	// 開發者得自行在需要的時候配置記憶體，這些記憶體會被配置在堆積區（Heap），
	// 不會自動清除，開發者得在不使用資源時自行釋放記憶體。

	// C 可以使用 malloc，它定義在 stdlib.h，舉例來說，
	// 可以在程式中以動態方式配置一個 int 型態大小的記憶體。

	// malloc 會配置一個 int 需要的空間，並傳回該空間的位址，
	// 可以使用指標 p 來儲存位址。
	int *p = malloc(sizeof(int));

	// 就 C11 規範來說，malloc 只配置空間但不初始空間的值，
	// 若要在配置完成後預設為型態的零值，可以使用 calloc。
	int *p1 = calloc(1, sizeof(int));


	int *p1 = malloc(100); // 100 bytes

    printf("空間位址：%p\n", p1);
    printf("儲存的值：%d\n", *p1);

    *p1 = 200; 

    printf("空間位址：%p\n", p1);
    printf("儲存的值：%d\n", *p1);

	// 若要釋放記憶體，可以使用 free 函式
    free(p1);


	// 如果想配置連續個指定型態的空間
	// 動態配置了 1000 個 int 大小的空間，並傳回空間的
	// 第一個位址，配置後的空間資料是未知的
	int *p2 = malloc(sizeof(int) * 1000); // 1000 個整數

	// 配置後的空間資料是未知的，使用 calloc 來
	// 宣告空間配置，每個 int 空間會被初始化為 0。
	int *p2 = calloc(1000, sizeof(int)); // 初始化 1000 個整數為 0


	// 將動態配置空間模擬為陣列來操作
	int size = 0;

    printf("輸入整數陣列長度:");
    scanf("%d", &size);

    int *arr = malloc(size * sizeof(int));

    printf("指定元素：\n");

    for(int i = 0; i < size; i++) {
        printf("arr[%d] = ", i);
        scanf("%d" , arr + i);
    }

    printf("顯示元素：\n");
    for(int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, *(arr+i));
    }

    free(arr);


	return 0;
} 
