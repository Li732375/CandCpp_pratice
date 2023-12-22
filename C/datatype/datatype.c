#include <stdio.h>
#include <stdlib.h>

#include <stdbool.h>

int main(){
	printf("���A�j�p\t\t(bytes)\n"); //�]\t�^���@�� tab �ĪG�C 
	
	printf("short\t\t\t%lu\n", sizeof(short)); //�]sizeof()�^��ܦ��Ϊ��O����A��쬰 bytes�C 
	// %lu ���榡���w�X�A��ܸӦ�m�N��m�@�� long unsigned ���A����ơA
	// �]�N�O�� sizeof() �ҭp��X�Ӫ��Ʀr���N�C 
	// �Y %lu ���i�ΡA�Ȯɱĥ� %d�C 
	
	printf("int\t\t\t%lu\n", sizeof(int)); 
	printf("long\t\t\t%lu\n", sizeof(long));
	// �b���P�sĶ���W�A�t�m���O������רä������ۦP�A�G�e�Ǥj�p�]���P�C 
	
	// �b 64 �줸 Ubuntu 16.04 ���� gcc �sĶ���U�Aint �P long �� 8 �줸�աA
	// �b Windows 10 �ϥ� MinGW-w64�AGNU �sĶ�������O 8.1.0 ���A���ܡA
	// int �P long �� 4 �줸�աA���׶V���A��ܥi��ܪ���ƭȽd��V�j�C
	
	printf("unsigned int\t\t%lu\n\n", sizeof(unsigned int));
	// �i�H�ϥ� signed�Bunsigned �ŧi�����B�L����ơA�L����Ƴ̥���줸����
	// �Ӫ�ܥ��t���A�Ҧp�@�� 8 �줸�r���Q�ΨӪ�ܾ�ƮɡA�i�H��ܼƭ� -128
	// �� 127�A�Ӥ@�ӵL���r���i�H��� 0 �� 255 ������ơC
	
	printf("float\t\t\t%lu\n", sizeof(float));
	printf("double\t\t\t%lu\n", sizeof(double));
	printf("long double\t\t%lu\n", sizeof(long double));
	printf("char\t\t\t%lu\n\n", sizeof(char));
	
	printf("bool\t\t\t%lu\n", sizeof(bool));
	// ���ѱ��� 4 �� #include <stdbool.h> ��A�o�̱N���i���� 
	// [Error] 'bool' undeclared (first use in this function)
	
	// C �y���@�}�l�èS�����L�ȫ��A�A�ӬO�N�s�ȩ� NULL ���������ߡA
	// ��L�ȳ��O���ߡAC99 �� bool �W�١A�w�q�� stdbool.h�A�ΨӪ��
	// ���L�ơA�O C99 ���L���A _Bool �������]�]�N�O�|�sĶ��|�i�}��
	//  _Bool�^�A�b�{�������@�Ӧ줸�աC 
	
	
	return 0;
} 
