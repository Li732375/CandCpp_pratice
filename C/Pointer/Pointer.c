#include <stdio.h>

int main(){
	// �ܼ����p�@�Ӹ�ƫ��A�B�x�s���ȻP�x�s�Ŷ�����}�ȡC
	
	// �Q���D�ܼƪ��O�����}�A�i�H�ϥ� & ���}�B��l�]Address-of operator�^�C 
	int n = 10;

    printf("n ���ȡG%d\n", n);
    printf("n ����}�G%p\n", &n);
    
    // �����s���ܼƷ|����t�쪺�Ŷ��@�s���A���С]Pointer�^�O�@���ܼơA�x�s�O�����}�C 
    // ���Ъ����A�M�w�F��}�W����Ʀp������A�H�Φp��i����йB��]Pointer arithmetic�^�C 
    int *p = &n;

    printf("���� p �x�s���ȡG%p\n", p);
    // �i�H�ϥδ��� �]Dereference�^�B��l * �Ӵ��������x�s����}������ơC 
    printf("���X p �x�s��}�B���ȡG%d\n", *p);
    
    // �p�G�w�g���o�F�O�����}�A�N�Y�ȫ��w�� *P �ɡA�ӰO�����}���Ȥ]�|���ܡA
	// �o�۷��i�D�{���A�N�ȩ�� P �x�s����}�B�C
	*p = 20;

    printf("n = %d\n", n);
    printf("*p = %d\n", *p);
	
	// �ŧi���Ц������w��ȡA�h�����x�s����}�O�������A�s��������}���O���餺�e�O�M�I���C
	// �̦n�����г]�w��ȡA�p�G���Ф@�}�l���x�s�����}�A�i�]�w��Ȭ� 0�C
	// ���Ыŧi�ɡA�i�H�a�b�W�ٮ���A�]�i�H�a�b����r����A�Ϊ̬O�m���C 
	// �T�ӫŧi�覡���O���\���C 
	int *p1; // �ɦV�βĤ@�ӡC 
	int* p2;
	int * p3;
	
	// �]���i�H�קK�H�U���~�|
	int* p4, p5; // �i��H�� p5 �]�O���СA���ƹ�W�ä��O�C
	int *p4_1, *p5_1; // �H�U���ŧi p4_1 �P p5_1 �~���O���СC
	// �u�x�s�O���骺��}�A���i�H�ϥ� * �B��l�� void* ���A���д����ȡA�ӥ����૬�ܹ��������A 
	void *p6 = &n;
	
    // �U���o�y���i��Avoid ���A���Ф��i���� 
    //printf("%d\n", *p);

    // �૬��int���A���Шë��w��iptr 
    int *iptr = (int*) p6;
    printf("%d\n", *iptr);
	
	
	// �Q const �ŧi���ܼƤ@���Q���w�ȡA�N����A�����ܼƪ��ȡA���M�i�H�j��p�U�����ܼƭȡC
	const int n1 = 10;
	int *p7 = &n1; // [warning] initialization discards 'const' qualifier from pointer target type
	*p7 = 20;
	printf("%d\n", n1); 
	
	// �p�G���Q�Ӧ�}���ȳQ���ܡA�i�H�� const �ŧi����
	const int n2 = 10;
	const int *p8 = &n2;
	//*p8 = 20; // [error] assignment of read-only location 
	
	// �@�����w�����ЭȡA�N������w�s���O�����}�ȵ����C
	int x = 10;
	int y = 20;
	int* const p9 = &x;
	//p9 = &y;  // [error] assignment of read-only variable `p9' 
	
	
	return 0;
}
