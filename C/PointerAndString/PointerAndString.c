#include <stdio.h>

int main(){
	// C ����r��A����W�N�O�r���}�C�A�Ӱ}�C�W�٨㦳���Щʽ�A�i�H�p�U�إߦr��C 
	char *text1 = "hello";
	
	// text �x�s�F�r��`�q����}�ȡA�r��`�q�إߪ����e�O��Ū���C 
	// �p�G�չϳz�L text1 ���ܦr���A�|�o�ͤ��i�w�������G�C
	//text1[0] = 'H'; //���M���|�����A���]�Ӧ���沧�`�A�B�^�ǭȤ]���`�A�ɭP�᭱���e�L�k���� 
	//printf("%s", text1);
	
	// ���r���`�q�A��ĳ�[�W const
	// �o�ˤ@�ӡA�Y�չϳz�L text4 ���ܦr���A�sĶ���|���ѡA�q���קK�F����ɴ������~�C
	const char *text4 = "hello";
	
	// �W�z�覡���Atext1 �u�O�ӫ��A�� const char* �����СA�P�H�U���P�C
	// ���U�إߪ� text ���e�ä��O��Ū���A�]�� text �O�Ӱ}�C�C
	char text2[] = "hello";
	
	// ��� wchar_t ����L���F�䴩 Unicode �����A�A�����o���S�ʡC
	
	// �L�׬O���ӧΦ��A���i�H�ǻ���}
	const char *text = text2;
	text = text4;
	
	// ���o�˴N����F
	char *text3 = text2;
	//text3 = text4; // [error]: invalid conversion from 'const char*' to 'char*' 
	
	// �p�G�u���Q�q�L�sĶ�A�N�������T�i�D�sĶ���A�A�n�h�� const �׹��C
	text = (char*) text4; // �j��h�� const
	
	
	// �إߦr��}�C
	const char *names[] = {"Just", "Moni", "Ire"};
	
	int i = 0;
    for(i = 0; i < 3; i++) {
        const char *name = names[i];
        printf("%s\n", name);
    }
	
	// �d�N�@�U���U�����P
	const char *names1[] = {"Justin", "Monica", "Irene"}; // �C�Ӥ����x�s�F�U�Ӧr��`�q����}��
	char names2[][10] = {"Justin", "Monica", "Irene"}; // �T�Ӫ��׬� 10 �� char �}�C�A�ýƻs�U�Ӧr��`�q�� char
	
	
	return 0;
} 
