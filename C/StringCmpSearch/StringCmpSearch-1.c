#include <stdio.h>
#include <string.h>


int main(){
	// �j�M�r�ꪺ�����禡
	
	// �Ĥ@�ӰѼƬO�Q�j�M�r��A�ĤG�ӰѼƬO�Q�n�j�M���l�r��A
	// �p�G�S���l�r��h�Ǧ^ NULL�A�p�G�j�M��Ĥ@�ӲŦX���l
	// �r��A�h�Ǧ^�ŦX��m�����СC
	int LEN = 80; 
	char source[LEN];
    char search[LEN];

    printf("��J�r��G");
    fgets(source, LEN, stdin);

    printf("�j�M�l�r��G");
    fgets(search, LEN, stdin);

    // �h���̫᪺����r��
    search[strlen(search) - 1] = '\0';
	
	
    char *loc = strstr(source, search);

    if(loc == NULL) {
        printf("�䤣��ŦX���l�r��\n");
    }
    else {
    	// �n�o���l�r��O�b���@�ӯ��ަ�m�A�h�i�H�Q�θӫ��д�h
		// �r��]�r���}�C�^�}�Y�����СA�o�쪺�첾�q�Y���ŦX����
		// �ަ�m�C 
        printf("�b���ަ�m %lu �B���l�r��\n", loc - source);
    } 
	
	return 0;
}
