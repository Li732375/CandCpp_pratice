#include <stdio.h>

int main(){
	
	// �r���`�q�]Literal constant�^�A���ƭ�(�Τ�r)���w�]��ƫ��A 
	// ���H�U���O:
	// ��Ʀr���`�q�A 1�B1.0�B3.14159 �o�˪��ƭȡC
	// �B�I�Ʀr���`�q�A�p 3.14f�A�]�i�H�ϥά�ǰO���A�Ҧp 20000 �i�H��ܬ� 2e4�C 
	// �r���r���`�q�A�p 'A'�B'1' ����ܤ@�Ӧr���r���`�q�C 
	// �r��r���`�q�A�� char �}�C�զ��C 
	
	// ��Ʀr���`�q�i�H�� 8 �i��B10 �i��P 16 �i���ܡA
	// �@��ߺD�ϥ� 10 �i��A�p�G�n�ϥ� 8 �i�쪺�r���`�q�A
	// �}�Y�[�W 0 �N�i�H�F�A�p�G�n�ϥ� 16 �i�쪺�r���`�q�A
	// �}�Y�[�W 0x�C
	
	// printf ���w�榡����r�� %d ��X��ƮɡA���|�H 10 �i������
	printf("%d\n", 26);
	printf("%d\n", 032);	
	printf("%d\n", 0x1A);
	
	// �i�H�b��ƭȤ���[�W L �� l�A��ܸӾ�ƭȭn�O long ���A�A
	// �]�� l �e���P�Ʀr 1 �d�V�A�]���`�ϥ� L�A�Ҧp 1L�A�]�i�H��
	// �w���L����ơA�i�ϥ� U �� u �ӫ��w�A�Ҧp 1U�AL �P U �i�H
	// �P�ɫ��w�A�Ҧp 1UL �� 1LU�C
	
	// �B�I�ƪ��ܡA�h�i�H�b�g�U�B�I�ƭȮɥH F �� f ��ܼƭȭn��
	// �� float ���A�A�Ҧp 3.14f�A�]�i�H�ϥά�ǰO���A�Ҧp 20000
	// �i�H��ܬ� 2e4�C
	
	// �`�Ϊ���q�ǦC:
	// \n�G����B�s��]newline�^
	// \t�G�����w���I�]horizontal tab�^
	// \v�G�����w���I�]vertical tab�^
	// \b�G�h�^�@��]backspace�^
	// \r�G��^�]carriage return�^
	// \f�G�����]formfeed�^
	// \a�G���n�]alert bell�^
	printf("�n���O�o�̫��ܪ�(���Xĵ�i�������n��)...\a\n");
	
	// \\�G�˱׽u�]backslash�^
	// \?�G�ݸ�
	// \'�G��޸�
	// \"�G ���޸�
	// \nnn�Gnnn ���@��T�� 8 �i��Ʀr�A��ܦr���s�X�A�Ҧp \115
	// \xnn.�Gnn ���h�� 16 �i��Ʀr�A��ܦr���s�X�A�q�`�Ψ�ӼƦr�A�Ҧp \xb4\xfa�A
	// \unnnn�GUnicode �X�I U+nnnn ��ܡ]C99�^
	// \Unnnnnnnn�GUnicode �X�I U+nnnnnnnn ��ܡ]C99�^
	
	char c = '\'';
	//char _c = ''\'; // [Error] empty character constant
	
	printf("��޸��r�� %c \n", c);
	printf("\" \062 �� \x48\x45\x4c\x4c\x4f\x21 \" \n");

	// �b C++ ���p�G�H "" �ӥ]�A�@���r���ܡA�Y���r��r���`�ơA
	// �Ҧp "Hello! World!" �N�O�r��r���`�ơA�r��r���`�q��
	// char �}�C�զ��A�h�줸�զr���ϥ� char ���x�s�X���]code unit�^
	// �A�C�@�Ӧr��̫�|�H�@�� null �r�������A��L�٦� L"..."�B
	// u8"..."�Bu"..."�BU"..." ���r���`�q�A�o�N���줧��ͨ�r��ɤ@�ֻ����C
	
	return 0;
} 
