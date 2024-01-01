#include <stdio.h>

int main(){
	// 變數關聯一個資料型態、儲存的值與儲存空間的位址值。
	
	// 想知道變數的記憶體位址，可以使用 & 取址運算子（Address-of operator）。 
	int n = 10;

    printf("n 的值：%d\n", n);
    printf("n 的位址：%p\n", &n);
    
    // 直接存取變數會對分配到的空間作存取，指標（Pointer）是一種變數，儲存記憶體位址。 
    // 指標的型態決定了位址上的資料如何解釋，以及如何進行指標運算（Pointer arithmetic）。 
    int *p = &n;

    printf("指標 p 儲存的值：%p\n", p);
    // 可以使用提取 （Dereference）運算子 * 來提取指標儲存的位址中之資料。 
    printf("取出 p 儲存位址處之值：%d\n", *p);
    
    // 如果已經取得了記憶體位址，將某值指定給 *P 時，該記憶體位址的值也會改變，
	// 這相當於告訴程式，將值放到 P 儲存的位址處。
	*p = 20;

    printf("n = %d\n", n);
    printf("*p = %d\n", *p);
	
	// 宣告指標但不指定初值，則指標儲存的位址是未知的，存取未知位址的記憶體內容是危險的。
	// 最好為指標設定初值，如果指標一開始不儲存任何位址，可設定初值為 0。
	// 指標宣告時，可以靠在名稱旁邊，也可以靠在關鍵字旁邊，或者是置中。 
	// 三個宣告方式都是允許的。 
	int *p1; // 傾向用第一個。 
	int* p2;
	int * p3;
	
	// 因為可以避免以下的誤會
	int* p4, p5; // 可能以為 p5 也是指標，但事實上並不是。
	int *p4_1, *p5_1; // 以下的宣告 p4_1 與 p5_1 才都是指標。
	// 只儲存記憶體的位址，不可以使用 * 運算子對 void* 型態指標提取值，而必須轉型至對應的型態 
	void *p6 = &n;
	
    // 下面這句不可行，void 型態指標不可取值 
    //printf("%d\n", *p);

    // 轉型為int型態指標並指定給iptr 
    int *iptr = (int*) p6;
    printf("%d\n", *iptr);
	
	
	// 被 const 宣告的變數一但被指定值，就不能再改變變數的值，雖然可以強制如下改變變數值。
	const int n1 = 10;
	int *p7 = &n1; // [warning] initialization discards 'const' qualifier from pointer target type
	*p7 = 20;
	printf("%d\n", n1); 
	
	// 如果不想該位址的值被改變，可以用 const 宣告指標
	const int n2 = 10;
	const int *p8 = &n2;
	//*p8 = 20; // [error] assignment of read-only location 
	
	// 一旦指定給指標值，就不能指定新的記憶體位址值給它。
	int x = 10;
	int y = 20;
	int* const p9 = &x;
	//p9 = &y;  // [error] assignment of read-only variable `p9' 
	
	
	return 0;
}
