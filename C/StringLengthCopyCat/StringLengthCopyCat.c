#include <stdio.h>
#include <string.h>

int main(){
	// �n�o���r��ҧt�r�����ס]���]�A�Ŧr���^�A�h�i�H�ϥ� strlen ��� 
	
	// size_t �O unsigned ���A�A�b�j�����t�άO�w�q�� unsigned int�A
	// ���b 64 �줸�t�Τ��i�H�O unsigned long�C
	char buf[80];

    puts("�п�J�r��...");
    scanf("%s", buf);

    size_t length = strlen(buf); // strlen �|�Ǧ^�r���}�C���Ĥ@�Ӧr���ܪŦr�������׭ȴ� 1
    printf("buf �r����סG%lu\n\n", length);
    
    fflush(stdin); // �M����J�w�İ�
    
    puts("�п�J�r��...");
    scanf("%s", buf);
    
	// �ϥ� fgets ���ܡA�n�`�N���|�]�A�̫���U Enter ������r���C 
    fgets(buf, sizeof(buf) / sizeof(buf[0]), stdin);
    
    length = strlen(buf); // strlen �|�Ǧ^�r���}�C���Ĥ@�Ӧr���ܪŦr�������׭ȴ� 1
    printf("buf �r����סG%lu\n\n", length);
	
	
	int len = 20;
	char buf_a[len];

    puts("�п�J�W��...");
    // fgets �|�]�A enter �r��
    fgets(buf_a, len, stdin);
    
	// �n�i��r��ƻs�A�i�H�ϥ� strcpy �禡
	int lenOfName1 = strlen(buf_a) + 1;
    char name1[lenOfName1];
    
    strcpy(name1, buf_a);
    printf("name1 �W�١G%s\n", name1);
	
	// ���ƻs����r��
    int lenOfName2 = lenOfName1 - 1;
    char name2[lenOfName2];
    
    // �]�w�����r�����Ŧr��
    memset(name2, '\0', lenOfName2);
    
    // �ƻs�r�ꤤ�Y�z�r�����e�A�i�H�ϥ� strncpy
    strncpy(name2, buf_a, lenOfName2); // strncpy ���|�۰ʦb�ت��}�C�[�W�Ŧr��
    printf("name2 �W�١G%s\n\n", name2);
    
    
    // �n�걵��Ӧr��A�h�n�ϥ� strcat
    char str1[] = "xyz";
    char str2[] = "abc";

    int lent = strlen(str1) + strlen(str2) + 1;
    char concated[lent];
    memset(concated, '\0', lent); // memset �禡�N�����r���]���Ŧr��

    strcat(concated, str1);
    strcat(concated, str2);
    // �걵�����r��A�i�H�ϥ� strncat
    // strncat(concated, str1);

    printf("�걵��G%s\n", concated);
	
	return 0;
} 
