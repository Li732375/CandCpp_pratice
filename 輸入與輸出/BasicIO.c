#include <stdio.h>

int main()
{
    int a = 3; // ����ܼ� a ����Ӱ򥻤��� (��ƫ��A �M �ƭ�) 
    printf("int a = %d\n", a); // �w�]�u�|��X�ƭ� 
    printf("&a = %d\n", &a); // "&" �@�ά����o����ܼƪ���} (������ƫ��A)
    
    // �o�̪� "*" �ëD���СA�ӬO "�����B��l"�A�@�ά����o���аѷ� (��Ӧ�}�ܼ�) ���ȡA�è̾ڸ�ƫ��A
	// �M�w�۾F�줸���^������ 
	printf("*&a = %d\n", *&a); 
	
	printf("*(int*)(%d) = %d\n", &a, *(int*)(&a)); // �o�̪� " int* " �~�O���СA���Ф@�w�n���a��ƫ��A
    
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
    
    printf("�d�N���椺�e�O�_�|���");
    
    return 0;
} 
