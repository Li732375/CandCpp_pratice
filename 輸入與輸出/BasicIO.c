#include <stdio.h>

int main()
{
	int a = 3; // 表明變數 a 的兩個基本元素 (資料型態 和 數值) 
    printf("int a = %d;\n", a); // 預設只會輸出數值 
    printf("&a = %d\n", &a); // "&" 作用為取得於該變數的位址 (不附資料型態)
    
    // 這裡的 "*" 並非指標，而是 "間接運算子"，作用為取得指標參照 (於該位址變數) 的值，並依據資料型態
	// 決定相鄰位元的擷取長度 
	printf("*&a = %d\n\n", *&a); 
	
	
	int *a_addr = NULL; 
	printf("int *a_addr = NULL;\n");
	printf("a_addr = %d\n", a_addr);
	printf("*a_addr = ?	(X)\n\n");
	
	printf("若要重新設定指標\n");
	a_addr = &a;
	printf("*a_addr = &a;	(X)\n");
	printf(" a_addr = &a;	(O)\n\n");
	
	printf("a_addr = %d\n", a_addr);
	printf("*a_addr = %d\n", *a_addr);
	printf("&a_addr = %d\n\n", &a_addr);
	
	//printf("*(int*)(a) = %d\n", *(int*)(a));
	printf("*(int*)(%d) = %d\n", &a, *(int*)(&a)); // 這裡的 " int* " 才是指標，指標一定要附帶資料型態
	printf("(int*)(%d) = %d\n", &a, (int*)(&a));
	printf("=> 實際上放在變數 a_addr 裡面的內容 = (int*)(%d)\n\n", &a);
	printf("(int**)(%d) = %d\n", &a, (int**)(&a));
	printf("(int***)(%d) = %d\n", &a, (int***)(&a));
	printf("*(int**)(%d) = %d\n\n", &a, *(int**)(&a));
	
	
	int a_addr_addr = 0;
	
	printf("輸入 a_addr 的位址: ");
	scanf("%d", &a_addr_addr);
	unsigned char a_addr_addr_1 = *(unsigned char*)a_addr_addr; // 若截掉 "*(unsigned char*)"，僅會保留位址 
	unsigned char a_addr_addr_2 = *(unsigned char*)(a_addr_addr + 1);
	unsigned char a_addr_addr_3 = *(unsigned char*)(a_addr_addr + 2); 
	unsigned char a_addr_addr_4 = *(unsigned char*)(a_addr_addr + 3);
	 
	printf("(最右) a_addr_addr_1 字元為\"%c\" ,數值為 %d\n", a_addr_addr_1, a_addr_addr_1);
	printf("       a_addr_addr_2 字元為\"%c\" ,數值為 %d\n", a_addr_addr_2, a_addr_addr_2);
	printf("       a_addr_addr_3 字元為\"%c\" ,數值為 %d\n", a_addr_addr_3, a_addr_addr_3);
	printf("(最左) a_addr_addr_4 字元為\"%c\" ,數值為 %d\n",a_addr_addr_4, a_addr_addr_4);
	
	printf("檢視上述四個字元 (皆 %d byte) 的位元總和應等於 %d (%d byte)\n\n",
	 sizeof(a_addr_addr_1), &a, sizeof(a_addr_addr));
	
	
	
	short v = 14773; // -32768 ~ 32767
	printf("short v = %d\n", v);
	//printf("*v = %d\n", *v);
	printf("&v = %d\n", &v);
	
	int v_addr;
	
	printf("輸入 v 的位址: ");
	scanf("%d", &v_addr);
	unsigned char v_addr_1 = *(unsigned char*)(v_addr);	
	unsigned char v_addr_2 = *(unsigned char*)(v_addr + 1);
	
	printf("(右半邊) v_addr_1 字元為\"%c\" ,數值為 %d\n", v_addr_1, v_addr_1);
	printf("(左半邊) v_addr_2 字元為\"%c\" ,數值為 %d\n", v_addr_2, v_addr_2);
	
	printf("檢視上述兩個字元 (皆 %d byte) 的位元組總和應等於 %d (%d byte)\n\n",
	 sizeof(v_addr_1), v, sizeof(v));
	
	
	int d = 104853; // -2147483648 ~ 2147483647 
	printf("int d = %d\n", d);
	printf("&d = %d\n", &d);
	
	int d_addr = 0;
	
	printf("輸入 a 的位址: ");
	scanf("%d", &d_addr);
	unsigned char d_addr_1 = *(unsigned char*)d_addr; // 若截掉 "*(unsigned char*)"，僅會保留位址 
	unsigned char d_addr_2 = *(unsigned char*)(d_addr + 1);
	unsigned char d_addr_3 = *(unsigned char*)(d_addr + 2); 
	unsigned char d_addr_4 = *(unsigned char*)(d_addr + 3);
	 
	printf("(最右) d_addr_1 字元為\"%c\" ,數值為 %d\n", d_addr_1, d_addr_1);
	printf(" d_addr_2 字元為\"%c\" ,數值為 %d\n", d_addr_2, d_addr_2);
	printf(" d_addr_3 字元為\"%c\" ,數值為 %d\n", d_addr_3, d_addr_3);
	printf("(最左) d_addr_4 字元為\"%c\" ,數值為 %d\n",d_addr_4, d_addr_4);
	
	printf("檢視上述四個字元 (皆 %d byte) 的位元總和應等於 %d (%d byte)\n\n",
	 sizeof(d_addr_1), d, sizeof(d));
	
	

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
