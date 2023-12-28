#include <stdio.h>
#include <string.h>

const char *orderMax(const char *str_1, const char *str_2); // [Note] previous implicit declaration of 'orderMax' was here

int main(){
	// ����r�� str1 �P str2 ���j�p
	
	// �Y�ۦP�N�Ǧ^ 0�Astr1 �j�� str2 �h�Ǧ^�j�� 0 ���ȡA
	// �p��h�Ǧ^�p�� 0 ���ȡA������зǬO�̦r�嶶�ǡA��
	// �p�Y str1 �j�� str2�A��� str1 �b�r�夤�����ǬO�b
	//  str2 ����C
	char a[4] = "aaa", b[4] = "baa";
	
	printf("�]�� char a[4] = \"aaa\", b[4] = \"baa\"\n");
	printf("�}�C a �P b ���ǽָ��j?\n");
	printf("���׬O %s\n", orderMax(a, b)); // strcmp ��X����ƫ��A 
	
	return 0;
}

const char *orderMax(const char *str_1, const char *str_2){
	int cmp = strcmp(str_1, str_2);
	
	if(cmp > 0){
		return str_1;
	} 
	else if(cmp == 0){
		return "same"; // [Warning] return makes integer from pointer without a cast
	}
	else {
		return str_2;
	}
	
}
