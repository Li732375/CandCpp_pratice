#include <stdio.h>
#include <string.h> // �r����� 

int main(){
	// �r��N�O�@���r�A�N�O�O���r���զ����}�C�A�̫�[�W�@�Ӫš]null�^�r�� '\0'
	char text[] = {'h', 'e', 'l', 'l', 'o', '\0'};
	printf("%s\n", text);
	
	char text_a[] = "hello"; // ���M�S�����w�Ŧr�� '\0'�A���O�|�۰ʥ[�W�Ŧr��
	int length = sizeof(text_a) / sizeof(text_a[0]);

    for(int i = 0; i < length; i++) {
        if(text[i] == '\0') {
            puts("null");
        } else {
            printf("%c ", text_a[i]);
        }
    }
    
    // text �N�}�C���צӨ��|�O 6�A���L�N�r����צӨ��|�O 5
    printf("�}�C���� %d\n", length);
    printf("�r����� %d", strlen(text_a)); // strlen �i�H���o�r�����
    
    // �ϥ� scanf ���o�ϥΪ̿�J���r��ɡA�榡���w�r�O�ϥ� %s�A
	// ���ܼƫe���ΦA�[�W &�A�]����ڤW�A�r��]�r���}�C�^�ܼƦW
	// �٥����A�Y��ܰO�����}��T�C
	char buf[80]; // ��J���r����פ��o�W�L 80 �Ӧr���]�W���]�A�Ŧr���^�A�]����ڤW�i�H��J 79 �Ӧr��
	
	printf("��J�r��G");
	scanf("%s", buf);
	printf("�A��J���r�ꬰ %s\n", buf);
	
	
	
	return 0;
}
