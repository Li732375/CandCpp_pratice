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
	scanf("��J�}�C���w���� %d\n", &len);
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
	printf("���w���Ӥ����]number_a[0]�^�� %d\n", number_a[0]);
	printf("���w���Ӥ����]score_a[0]�^�� %.2lf\n", score_a[0]);
	printf("���w���Ӥ����]ascii_a[0]�^�� %c\n", ascii_a[0]);
	
	// �}�C�W�ٴN���V�}�C�O���骺�Ĥ@�Ӧ�m����}�A�ӯ��ޭȪ�ܩҫ��w���}�C�����A
	// �۹��}�C�Ĥ@�ӰO�����m���첾�q�]Offset�^�C 
	int number_b[5] = {0, 1, 2, 3, 4};
    int length = sizeof(number_b) / sizeof(number_b[0]);
	
	//for(int i = 0; i < length; i++){...} // [Error] 'for' loop initial declarations are only allowed in C99 or C11 mode
    int i = 0;
	for(i = 0; i < length; i++) {
        printf("%d ", number_b[i]); 
    }
    printf("\n");
	
	// �u�Ʊ��l��������
	int number_c[5] = {98, 76}; 
	double weight[5] = {0.0, 0.1}; 
	char ch[5] = {'A', 'B'}; 
	
	// ���i�H�N�}�C�������w���t�@�Ӱ}�C
	int arr1[5];
	int arr2[5];
	
	// ���~�I���ઽ�����w�}�C���t�@�Ӱ}�C
	//arr1 = arr2; // [Error] assignment to expression with array type
	
	// �u��`�ǳv�Ӥ����i��ƻs
	for(i = 0; i < sizeof(arr1); i++) {
		arr1[i] = arr2[i];
	}
	
	return 0;
}
