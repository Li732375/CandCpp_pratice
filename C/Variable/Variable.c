#include <stdio.h>

int main(){
	// �@���ܼ����p�@�Ӹ�ƫ��A�B�x�s���ȻP�x�s�Ŷ�����}�ȡC
	
	// ��ƫ��A�M�w�F�ܼƤ��t�쪺�O����j�p�F�ܼ��x�s���ȬO��
	// �x�s��O���餤���Y�ӼƭȡC
	
	// �i�ϥ� int�Bfloat�Bdouble�Bchar ������r�]Keyword�^��
	// �ŧi�ܼƦW�٨ë��w��ƫ��A�A�ܼƦb�R�W�ɦ��ǳW�h�A���i
	// �H�ϥμƦr�@���}�Y�A�]���i�H�ϥίS��r���A���O *&^% ��
	// �����r���A���ܼƦW�٤��i�H�P C ���w������r�P�W�A�Ҧp 
	// int�Bfloat�Bstruct ���C
	
	// �ŧi�@���ܼơA�N�|�t�m�@���O����Ŷ����ܼơA�Ŷ����ר�
	// �ŧi�ɪ���ƫ��A�өw�A�Q�t�m���o���Ŷ�������i��N����
	// �ơA�]�]���ܼƦb�ŧi�᪺�ȬO���i�w�����A�ҥH���Ӧb�b��
	// �ƫŧi���l��ȡA�i�H�ϥΫ��w�B��l�]Assignment operator�^= 
	// �ӫ��w�ܼƪ��ȡC
	
	int age;
	double score;
	char level;
	
	printf("\n�~��\t�o��\t����");
	// �ϥή榡���w�r %f�A�䤤�A�[�W .2�A�����ܯB�I�Ʈɥu��
	// �ܦܤp�ƫ�ĤG��C 
	printf("\n%d\t%.2f\t%c", age, score, level);

	age = 7;
	score = 3.564;
	level = 'f';
	
	printf("\n�~��\t�o��\t����");
	printf("\n%d\t%.2f\t%c", age, score, level);
	
	
	// ���ɭԤ@���N�ƭȫ��w���ܼƤ���A�N�����\�A���s���w���P
	// �@�ܼơA�o�ɥi�H�b�ŧi�ܼƮɨϥ� const ����r�ӭ��w�C
	const double pi = 3.14;
	//pi = 3; // [Error] assignment of read-only variable 'pi'
	
	// �p�G�n�ŧi�L��������ܼơA�h�i�H�[�W unsigned ����r�C
	unsigned int i;
	// bool ���A���ܼ����M�]�i������ƫ��A�A������b�ŧi�ܼƮ�
	// �[�W unsigned �ӭ׹��C
	
	return 0;
}
