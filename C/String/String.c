#include <stdio.h>
#include <string.h> // �r����� 

int main(){
	// �r��N�O�@���r�A�N�O�O���r���զ����}�C�A�̫�[�W�@�Ӫš]null�^�r�� '\0'
	char text[] = {'h', 'e', 'l', 'l', 'o', '\0'};
	printf("%s\n", text);
	
	char text_a[] = "hello"; // ���M�S�����w�Ŧr�� '\0'�A���O�|�۰ʥ[�W�Ŧr��
	int length = sizeof(text_a) / sizeof(text_a[0]);
	
	int i = 0;
    for(i = 0; i < length; i++) {
        if(text[i] == '\0') {
            puts("null");
        } else {
            printf("%c ", text_a[i]);
        }
    }
    
    // text �N�}�C���צӨ��|�O 6�A���L�N�r����צӨ��|�O 5
    printf("�}�C���� %d\n", length);
    printf("�r����� %d\n\n", strlen(text_a)); // strlen �i�H���o�r�����
    
    // �ϥ� scanf ���o�ϥΪ̿�J���r��ɡA�榡���w�r�O�ϥ� %s�A
	// ���ܼƫe���ΦA�[�W &�A�]����ڤW�A�r��]�r���}�C�^�ܼƦW
	// �٥����A�Y��ܰO�����}��T�C
	char buf[80]; // ��J���r����פ��o�W�L 80 �Ӧr���]�W���]�A�Ŧr���^�A�]����ڤW�i�H��J 79 �Ӧr��
	
	printf("��J�r��G");
	scanf("%s", buf);
	printf("�A��J���r�ꬰ %s\n\n", buf);
	
	// ���w�s���r��ȵ����ɡA���๳�U�����覡���w
	//char name[80]; 
	//name = "Justin"; // [Error] assignment to expression with array type
	
	// �����n�@�Ӧr���@�Ӧr�������w�ܰ}�C���A�æb�̫�[�W�ťզr��
	char name[80] = {'\0'}; 
	name[0] = 'J'; 
	name[1] = 'u'; 
	name[2] = 's'; 
	name[3] = 't'; 
	name[4] = 'i';
	name[5] = 'n';
	name[6] = '\0'; 
	puts(name);
	printf("\n");
	
	// ����r���O�@�Ӧ줸�մN�i�H�x�s����ơA�]���޵oĵ�T
	
	// [Warning] overflow in implicit constant conversion [-Woverflow]
	// [Warning] multi-character character constant [-Wmultichar]
	//char t = '�L'; 
	
	// �ݭn�ϥΥH�U���覡
	char text[] = "�L"; 
	
	// �Y�ϥ� strlen(text) �|�o�줰��Ʀr�O�H
	// ���׬O�ݧA����l�X�s�X�O����A
	// �p�G�ϥ� Big5 ���g��l�X���ܡA
	// ���׷|�O 2�A�p�G�ϥ� UTF-8 ��
	// �g��l�X���ܡA���׷|�O 3�C
	
	// char �O�Ψ��x�s�r����ơA�ܩ�s����S���W�w�A
	// ��� char text[] = "�L" �����p�A���ӱN text 
	// ���C�ӯ��ަ�m���O�X���]code unit�^�A�Ӥ�
	// �O�r���F�A�]�������H�h�Ӧ줸�ը��x�s�u�L�v�A
	// �]���o���r���b C �Q�٬��h�줸�զr���]multibyte character�^�A
	// �޳N�W�ӻ��A�O�μƭ� char �զ����@�Ӧr���A
	// �p��զ��N�n�ݱĥέ��ؽs�X�C
	
	// �Y�n�T�w�ϥ� UTF-8 �s�X�r��AC11 �i�H UTF-8 ���g��l�X�A�æb "" �e�m u8�A���w�r��ϥ�
	char text_a[] = u8"�L";
	printf("�r����� %d", strlen(text)); // ��� 3 
	
	// �Y���ϥ� UTF-8 �s�X����l�X�A�i�H�ϥνX�I���w
	char text[] = u8"\u6797";
	printf("�r����� %d", strlen(text)); // ��� 3
	
	// �Q���D���X�Ӥ���r����H
	// �n���D wchar_t ���A�A�������r���`�q�O L'�L' ���g�k
	// �٬��X�R�r���r���`�q�]wide character literal�^�A
	// wchar_t ���O�Ӿ�ƫ��A�A�Ψ��x�s�X�I�A�N�{���ӻ��A
	// �򥻤W�O�� Unicode�C
	wchar_t ch = L'�L'; // �]�i�H�g L'\u6797'
	printf("%d", ch);   // ��� 26519

	wchar_t text_b[] = L"�}����";  // �X�R�r���r��]wide-chararater string�^
	// wcs �N�O wide-chararater string ���Y�g
    printf("�r����� %d", wcslen(text_b)); // ��� 3
    
    // wchar_t �èS���W�w�j�p�A�u�n�D�����e�Ǩt�Τ��i�H�ϥΪ��r��
    
    
	
	return 0;
}
