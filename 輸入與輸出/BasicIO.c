#include <stdio.h>

int main()
{
    int a = 3;
    printf("a = %d\n", a);
    printf("&a = %d\n", &a);
    printf("*&a = %d\n", *&a);
	printf("*(int*)(%d) = %d\n", &a, *(int*)(&a));
    
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
    
    return 0;
} 
