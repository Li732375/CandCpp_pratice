#include <stdio.h>
#include <string.h>


int main(){
	// ��Ӧr��}�l���ǰt���Ĥ@�Ӧr�����ަ�m�A�_�h�Ǧ^ 0
	int LEN = 80;
	char str1[LEN];
    char str2[LEN];

    printf("��J�r��G");
    fgets(str1, LEN, stdin);

    printf("�j�M�l�r��G");
    fgets(str2, LEN, stdin);
    // �h���̫᪺����r��
    str2[strlen(str2) - 1] = '\0';

    size_t loc = strspn(str1, str2);

    if(loc == strlen(str1)) {
        printf("�����ǰt\n");
    }
    else {
        printf("�q���ަ�m %lu �B�}�l���ǰt\n", loc);
    }
	
	return 0;
}
