#include <stdio.h>

int main()
{
    int a = 3;
    printf("a = %d\n", a);
    printf("&a = %d\n", &a);
    printf("*&a = %d\n", *&a);
	printf("*(int*)(%d) = %d\n", &a, *(int*)(&a));
    
    int b, c;
    printf("\n��J��Ʀr (��ܤ֤@�Ů�Τ@����ҥi):\n");
    printf("�H scanf(\"%%d%%d\", &b, &c) Ū�J\n");
    scanf("%d%d", &b, &c); // ��J�ɡA�L�״���ΪŮ��J�ҥi�A��J�`�ƺ��~�|���� 
    printf("b �Ȭ� %d, c �Ȭ� %d, b*c �Ȭ� %d\n", c, b, b*c);
    
	printf("\n�A�@��\n");
	printf("��J��Ʀr (��ܤ֤@�Ů�Τ@����ҥi):\n");
    printf("�H scanf(\"%%d%%d\", b, c) Ū�J\n");
    scanf("%d%d", b, c);
    printf("b �Ȭ� %d, c �Ȭ� %d, b*c �Ȭ� %d\n", c, b, b*c); // ���楼��ܥ��`�A�B�^�ǭȥ��w�D 0 
    
    return 0;
} 
