#include <stdio.h>

int main(){
	// �R�A�}�C���ŧi�覡�A�ƥ��N�M�w�}�C���סC 
	
	// �b C99 �e�A���i�H�ϥ��ܼƨӨƫ�M�w�}
	// �C�����סA�p�G�n�ʺA�ŧi�}�C���סA�i
	// �H�ϥΤ@�Ǹ�Ƶ��c�P�ʺA�O����ŧi��
	// �ѨM�}�C�j�p�����T�w�����D�C 
	int number[10];    // �ŧi 10 �Ӥ�������ư}�C
	double score[10];  // �ŧi 10 �Ӥ������B�I�ư}�C
	char ascii[10];    // �ŧi 10 �Ӥ������r���}�C
	
	// C99 �[�J�F�i�ܪ��ת��}�C���A�]variable length array type�^�A
	// �i�H�ϥ��ܼƨӫ��w�}�C���סA���ܼƭ�
	// ��ڤW�i�H�O����ɴ��B��ȡA�b�䴩��
	// �sĶ���U�A�H�U�{���X�O�i�檺�C
	
	// ���L C11 �o�N�o�ӥ\��w���D���n�\��A
	// �sĶ����@���@�w�o�䴩�A�M�Ӥj�h�ƽs
	// Ķ�����䴩�o�ӥ\��C 
	int len = 0;
	scanf("%d", &len);
	int arr[len];
	
	// �ŧi�}�C����A�}�C�Ұt�m�쪺�O�����
	// �������x�s���ƬO�������A�ҥH�b��l�}
	// �C�����Ȥ��e�A���������ȬO�������C
	
	// �U�����X�ӫŧi�A��ư}�C�����������|
	// �Q��l�� 0�A�B�I�ư}�C�h�|�Q��l�� 0.0�A
	// �r���}�C�h�|�Q��l���Ŧr���]'\0'�^�A�b��
	// �i�}�C�ɪ�l�}�C�����A�i�H�קK�{���s����
	// �D�w�����ƭȡC 
	int number_a[10] = {0};
	double score_a[10] = {0.0};
	char ascii_a[10] = {'\0'};
	
	// �n�s���}�C�����ȮɡA�i�H�ϥΤU�С]Subscript�^�B��l [] �[�W���ޡ]Index�^�A���w�n�s�����}�C�����C 
	// �}�C�b�ϥήɡA�o���}�C���׬O���n���A���i�H�s���W�L�}�C���ת��O����A
	// �o�|�o�͵L�k�w�������G�A�}�C�����ä����D�ۤv�����׸�T�C 
	printf("���w���Ӥ����]number_a[0]�^�� %d", number_a[0]);
	printf("���w���Ӥ����]score_a[0]�^�� %.2f", score_a[0]);
	printf("���w���Ӥ����]ascii_a[0]�^�� %c", ascii_a[0]);
	
	
	
	return 0;
}
