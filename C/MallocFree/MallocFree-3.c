#include <stdio.h>

#include <stdlib.h>

int main(){
	// 如果要改變已配置的記憶體大小，可以使用 realloc
    int size = 0;

    printf("陣列長度：");
    scanf("%d", &size);
    int *arr1 = calloc(size, sizeof(int));

    printf("指定元素內容ˇ：\n");
    for(int i = 0; i < size; i++) {
        printf("arr1[%d] = ", i);
        scanf("%d" , arr1 + i);
    }

    printf("顯示元素：\n");
    for(int i = 0; i < size; i++) {
        printf("arr1[%d] = %d\n", i, *(arr1 + i));
    }

    int *arr2 = realloc(arr1, sizeof(int) * size * 2);
    printf("顯示元素：\n");
    for(int i = 0; i < size * 2; i++) {
        printf("arr2[%d] = %d\n", i, *(arr2 + i));
    }

    printf("arr1 位址：%p\n", arr1);
    printf("arr2 位址：%p\n", arr2);

    free(arr2);

    // 要注意的是，上例中，重新配置後的位址並不保證相同，
    // realloc 會複製資料來改變記憶體的大小，若原位址有
    // 足夠的空間，使用原位址調整記憶體的大小，若空間不足
    //，會重新尋找足夠的空間來進行配置，在這個情況下，
    // realloc 前舊位址的空間會被釋放掉，也就是說，必須
    // 使用 realloc 傳回的新位址，而不該使用舊位址，若 
    // realloc 失敗會傳回空指標（null），因此最好對位址
    // 進行檢查。

    // 對於動態配置的記憶體，若有個指標是唯一指向資源位址
    // ，可以使用 restrict 修飾。
    int *restrict p = calloc(1, sizeof(int));

    // 被 restrict 修飾的指標，表示由開發者指示編譯器，
    // 這個資源只由該指標存取，如此一來，編譯器就有機會
    // 進行最佳化，唯一性是由開發者掌握，編譯器不會檢查
    // 被 restrict 修飾的指標，指向的資源是否被其他指
    // 標指向。

    // restrict 對程式碼閱讀上，也具有提醒開發者的作用，
    // 表示不該有其他指標儲存相同資源的位址，在函式簽署上
    // ，也可提示多個資源的位址必須是獨立的
    // 例如 strcpy 的簽署，聲明了 dest 與 src 必須不同

    // char *strcpy( char *restrict dest, const char *restrict src );

	return 0;
} 
