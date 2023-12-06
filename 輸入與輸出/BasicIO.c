#include <stdio.h>

int main()
{
    int a = 3; // 表明變數 a 的兩個基本元素 (資料型態 和 數值) 
    printf("int a = %d\n", a); // 預設只會輸出數值 
    printf("&a = %d\n", &a); // "&" 作用為取得於該變數的位址 (不附資料型態)
    
    // 這裡的 "*" 並非指標，而是 "間接運算子"，作用為取得指標參照 (於該位址變數) 的值，並依據資料型態
	// 決定相鄰位元的擷取長度 
	printf("*&a = %d\n", *&a); 
	
	printf("*(int*)(%d) = %d\n", &a, *(int*)(&a)); // 這裡的 " int* " 才是指標，指標一定要附帶資料型態
    
    int b, c;
    printf("\n輸入兩數字 (格至少一空格或一換行皆可):\n");
    printf("以 scanf(\"%%d%%d\", &b, &c) 讀入\n");
    scanf("%d%d", &b, &c); // 輸入時，無論換行或空格輸入皆可，輸入總數滿才會執行 
    printf("b 值為 %d, c 值為 %d, b*c 值為 %d\n", c, b, b*c);
    
	printf("\n再一次\n");
	printf("輸入兩數字 (格至少一空格或一換行皆可):\n");
    printf("以 scanf(\"%%d%%d\", b, c) 讀入\n");
    scanf("%d%d", b, c);
    printf("b 值為 %d, c 值為 %d, b*c 值為 %d\n", c, b, b*c); // 本行未顯示正常，且回傳值必定非 0 
    
    printf("留意此行內容是否會顯示");
    
    return 0;
} 
