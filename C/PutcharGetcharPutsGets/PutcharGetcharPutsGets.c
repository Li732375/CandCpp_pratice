#include <stdio.h>

int main(){
	
	// �u�Q���o�ϥΪ̿�J���r���A�h�i�H�ϥ� getchar�A
	// ���������o�ϥΪ̿�J���r���öǦ^�A�p�G�u�Q��X
	// �@�Ӧr���A�h�]�i�H�����ϥ� putchar�C 
	char c;
	
	printf("�п�J�@�Ӧr���G");
	c = getchar();
	
	putchar(c);
	putchar('\n');
	putchar('\n');
	
	// �p�G�Q���o�ϥΪ̿�J����Ӧr��A
	// �L�h�i�H�ϥ� gets�A���|���o
	// �ϥΪ̪���J�r��A���]�A���U Enter 
	// ������r���X�C 
	
	// �ӷQ�n��X��Ӧr��A�]�i�H�����ϥ�
	//  puts()�A���b��X�r���A�|�����i�洫��C
	char str[20];

    puts("�п�J�r��G");
    // �L�k���D�r���}�C���j�p�A�ӬO�̿ഫ��Ÿ��� EOF �~�|������J�C
	// ���i��޵o�w�İϷ��쪺�w�����D�C 
    gets(str); // [warning] the `gets' function is dangerous and should not be used.

    puts("��J���r�ꬰ�G");
    puts(str);
    
    
    // �q C11 ����Agets �w�g���A�O�зǨ禡���@�A
	// �i�H�ϥ� fgets �Ө��N get�C 
    char buf[20];

    puts("�п�J�r��G");
    fgets(buf, sizeof(buf), stdin); // �������w�r���}�C�B�j�p�H�� stdin�C

    puts("��J���r�ꬰ�G");
    puts(buf);
    
    
	return 0;
} 
