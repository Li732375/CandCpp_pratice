#include <stdio.h>

// �Y�n�ϥΩR�O�C�޼ơA�i�H�b�A�����p�U��g
int main(int argc, char *argv[]){ // �Ѽ� argc �O�@�Ӿ�?�A�O���R�O�C�޼ƪ��ӼơA�o�Ӽƥإ]�A�F�{���W��
	
	int i = 0;
	for(i = 1; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
	
	return 0;
	
}

// �Ѽ� argc �O�@�Ӿ�ơA�O���R�O�C�޼ƪ��ӼơA�o�Ӽƥإ]�A�F�{���W�١A�Ҧp�U����������O�Aargc �N�O���� 5
// prog hello.c -o  -c project.p

// �޼Ƥ����H�ťէ@�Ϲj�A�W�����R�O�]�A�{���W�٦@�|�����Ӥ޼�

// argc ���Ȥ@�w�j�� 1�A�]���ܤ֥]�A�F�{���W�١A�� argv ���O�x�s�F�޼ƪ��r��

// �Y��J�O�@�ӥ]�A�ťժ��r��A�N�ϥ� "" �ӥ]�A
// prog "This is a string!" 
