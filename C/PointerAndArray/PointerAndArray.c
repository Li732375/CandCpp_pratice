#include <stdio.h>

int main(){
	// �ŧi�}�C����A�ϥΨ�}�C�ܼƮɡA�|���o����������}�C
	int arr[10] = {0};
	
	// �}�C arr �P &arr[0] ���ȬO�ۦP���C 
    printf("arr :\t\t%p\n", arr);
    printf("&arr[0] :\t%p\n\n", &arr[0]); 
	
	// �C�Ӱ}�C��������}���A�O int*�A�o��ܹ復�i��B��ɡA
	// �O�H int ���׬����A�� arr �ܼƪ���}�B�N�O�}�C���
	// ���}�ݡA&arr ���A�|�O int (*)[5]�A5 �Y�}�C���סC 
	int arr1[] = {10, 20, 30, 40, 50}; 
	int len = *(&arr1 + 1) - arr1;
	int *p = arr1;
	
	printf("*&arr1 �Ȭ� %d\n", *&arr1);
	printf("&arr1 �Ȭ� %d\n", &arr1);
	printf("arr1 + 1 �Ȭ� %d\n", arr1 + 1); // �����B�� 
	printf("&arr1 + 1 �Ȭ� %d\t=> �S�O�`�N�o��\n", &arr1 + 1); // ���}��A�B��A�S�O�`�N 
	printf("*(&arr1 + 1) �Ȭ� %d\n", *(&arr1 + 1));
	printf("arr1 �Ȭ� %d\n", arr1);
	printf("arr1 �����׬� %d\n\n", len);
	
	printf("int *p = arr1;\n");
	printf("p �Ȭ� %d\n", p);
	printf("p + 1 �Ȭ� %d\n", p + 1); // �����B��
	// �ѩ�ӫ����ܼƶȫO�d�}�C arr1 �Y�Ӥ�������}�A���N���Ӱ}�C�C 
	printf("&p + 1 �Ȭ� %d\n", &p + 1); // �N�q�P�W 
	printf("*(&p + 1) �Ȭ� %d\n\n", *(&p + 1)); // �����Ӥ������ƭ� 
	
	
	int i = 0;
    for(i = 0; i < len; i++) {
    	printf("&arr1[%d] �Ȭ� %d", i, &arr1[i]);
    	printf("\t&arr1[%d]: %p", i ,&arr1[i]);
        printf("\tptr + %d: %p\n", i, p + i);
    }
    printf("\n");
    
    
	return 0;
}
