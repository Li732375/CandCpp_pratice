#include <stdio.h>

int main(){
	
	// printf() �N�O�N���w����r�B�ƭȵ���X�ܿù��W�A�åB����L��|�Ǧ^�ҿ�X���r���ơC
	int count = printf("hello world!\n");
	printf("�o�y���׬� %d (�]�t�r��r���� \\0)\n\n", count);
	
	// �b����x����{���ɨϥ� >> �N��X���G�ɦV�ܫ��w�ɮסA�Ҧp�]���]�s
	// Ķ�᪺�i�����ɦW�� PrintfScanf�^
	
	//PrintfScanf >> result.txt;
	
	// �n���s�ɦV�зǿ�X�O�� >,�зǿ�J�h�O <�A�� >> ���F���ɼзǿ�X�A
	// �٦����[���\��A�]�N�O�|���X���[��Q�ɦV���ؼ��ɮ׫��Y�A�p�G��
	// ���ɮץ��Ӥ��s�b�A����ĪG�N�M > �@�ˡC
	
	// �b�ϥ� printf �ɭn���w��ơB�B�I�ơB�r�����i����ܡA�n�t�X�榡��
	// �w�r�]format specifier�^�A�H�U�C�X�X�ӥi�Ϊ��榡���w�X�G

	// %c�G�H�r���覡��X
	// %d�G10 �i���ƿ�X
	// %o�G�H 8 �i���Ƥ覡��X
	// %u�G�L����ƿ�X
	// %x�B%X�G�N��ƥH 16 �i��覡��X
	// %e�B%E�G�ϥά�ǰO����ܯB�I��
	// %g�B%G�G�B�I�ƿ�X�A�� %f �� %e�]%f �� %E�^�A�ݭ��Ӫ�ܺ�²
	// %%�G��� %
	// %s�G�r���X
	// %lu�Glong unsigned ���A�����
	// %p�G���Ы��A
	
	printf("��ܦr�� %c\n", 'A');
    printf("��ܦr���s�X %d\n", 'A');
    printf("��ܦr���s�X %c\n", 65);
    printf("��ܤQ�i���� %d\n", 15);
    printf("��ܤK�i���� %o\n", 15);
    printf("��ܤQ���i���� %X\n", 15);
    printf("��ܤQ���i���� %x\n", 15);
    printf("��ܬ�ǰO�� %E\n", 0.001234);
    printf("��ܬ�ǰO�� %e\n\n", 0.001234);
    
    // %f�G�B�I�ƿ�X
    printf("example:%f\n", 19.234);
	printf("example:%.2f\n", 19.234); // .2 ���w�p���I������
	
	// ��� 6 ��ܹw�d 6 �Ӧr���e�סA�ѩ�
	// �w�d�F 6 �Ӧr���e�סA�����������n
	// �Ѫťզr���ɤW�C 
	printf("example:%6.2f\n", 19.234); // �]19.23�u�����Ӧr���A�ҥH�b�e��s�ɤW�@�Ӫťա^
	
	// �Y�b % ������w�t���A�Ҧp %-6.2f�A
	// ��ܾa������A�S�����w�h�a�k����C
	// _= �ȧ@�Y��ĪG�ΡC 
	printf("example:_=%6.2f_=\n", 19.234);
    printf("example:_=%-6.2f_=\n\n", 19.234);
	
	// * �N�Q���᪺�Ĥ@�Ӥ޼ƩҨ��N�A�ҥH
	// �Ĥ@�� printf() �N�w�d�@�Ӧr���e�סC 
	printf("%*d\n", 1, 1);
	printf("%*d\n", 2, 1); 
    printf("%*d\n\n", 3, 1);
    
    printf("%.*f\n", 2, 1.5);// �ĪG�P .2 
    printf("%*f\n\n", 2, 1.5); // �B�I�ƵL��
    
    // �r�ꪺ�ܡA�]�i�H�ϥ� %.*s�A�o��ܭn
	// ��ܦr�ꤤ 0 ��h�Ӧr���A��ڪ��r��
	// �ƥi�H�b�ĤG�ӰѼƫ��w�C
	printf("%.*s\n", 3, "Justin");
    printf("%.*s\n", 5, "Justin");
    printf("%.*s\n\n\n", 7, "Justin");
	
	
	// �b�{�������ŧi�F�@�Ӿ���ܼ� input�A
	// �ϥ� scanf() �禡�ɡA�Y��J���ƭȬ�
	// ��ơA�h�ϥή榡���w�r %d�A�Y��J��
	// �O��L��ƫ��A�A�h�����ϥι�������
	// �����w�r�C 
	// �p�G�O double�A�S�O�`�N�n�ϥ� %lf ��
	// ���w�C 
	int number1, number2;

    printf("�п�J��ӼƦr�A�����ϥΪťհϹj�^�G"); // ���w�F�ϥΪťըӰϹj��ӿ�J
    scanf("%d %d", &number1, &number2);
    printf("�A��J���Ʀr�G%d %d\n", number1, number2);

    printf("�ЦA��J��ӼƦr�A�����ϥ�-���Ϲj�^�G"); // ���w�F�ϥ� - �ӰϹj��ӿ�J
    scanf("%d-%d", &number1, &number2);
    printf("�A��J���Ʀr�G%d-%d\n\n", number1, number2);
	
	// scanf �i�H���w�i�������r�����X�C
	 
	// �r��O�r���}�C�A�ӥB�̫�@�Ӥ��������O�Ŧr�� �C
	
	// ���쪺�r���Y�W�X buf�A�٬��w�İϷ���]buffer overflow�^�A
	// �|�o�ͤ��i�w�������G�A�Ʀܦ����w���z�I�C 
	char buf[50]; // ���׬� 50�A��J���r���̦h�u��O 49 �ӡC 

    printf("�п�J 1 �� 5 ���r���G");
    // scanf �禡�s��Ū�J�ŦX���X���r���é��r���}�C���A
	// ����Ū�줣�ŦX���r������A�ѤU���r�����|�s�b��J�w
	// �İϤ��C 
    scanf("%[1-5]", buf); // �u�Q���� 1 �� 5 ���r��
    printf("��J���r���� %s\n\n", buf); // �}�C�W�٥����N����}��T�A�G���� & �Ө��}�A����|�A�ݨ�

    fflush(stdin); // �M����J�w�İ�

    printf("�п�J XYZ ���@�r���G");
    scanf("%[XYZ]", buf);
    printf("��J���r���� %s\n\n", buf);
    
    // �i�H�ϥ� %[0-9] ���w���o 0 �� 9 ���r���A
	// �ϥ� %[A-z] ���w���o ASCII ���� A �� z ���r���C
	
	// �p�G�n�ư����ܡA�h�ϥ� ^�A�Ҧp %[^ABC] �i���o ABC �r���H�~���Ҧ��r���C
	
	
	// �w������k���@�O�A���w scanf �C������i�H�������̤j�r���ơC
	char buf[10];

    printf("�п�J�r��G");
    scanf("%9s", buf);
    printf("��J���r��G%s\n\n", buf);
    // �Y��J���r���W�L 9�Abuf �]�u�|���� 9 �Ӧr���[�W�@�ӪŦr���A�W�L���r���|�d�b��J�w�İϡC
    // �t�@�ӹw����J�W�L buf ���ת��覡�A�O�ϥ� fgets�A
	// �i�H�Ѧҡqputchar�Bgetchar�Bputs�Bfgets�r�������C
    
	return 0;
} 
