#include <stdio.h>

int main(){
	// C ���]�������Y�B��l�]Relational operator�^�Τ���B��l�]Comparison operator�^�A
	// ���̦��j��]>�^�B���p��]>=�^�B�p��]<�^�B���j��]<=�^�B���� �]==�^�H�Τ�����]!=�^�C
	
	printf("10 > 5\t\t%d\n", 10 > 5);
	printf("10 >= 5\t\t%d\n", 10 >= 5);
	printf("10 < 5\t\t%d\n", 10 < 5);
	printf("10 <= 5\t\t%d\n", 10 <= 5);
	printf("10 == 5\t\t%d\n", 10 == 5);
	printf("10 != 5\t\t%d\n\n", 10 != 5);
	
	// ����B��l�]Conditional operator�^
	// ���� ? ���߶Ǧ^�� : ���ѶǦ^��
	int score = 0;

    printf("��J�ǥͤ��ơG");
    scanf("%d", &score);

    printf("�ӥͬO�_�ή�H%c\n\n", score >= 60 ? 'Y' : 'N');
	
	
	int input = 0;

    printf("��J��ơG");
    scanf("%d", &input);

    printf("�ӼƬ��_�ơH%c\n", input % 2 ? 'Y' : 'N');
	
	return 0;
} 
