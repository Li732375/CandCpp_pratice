#include <stdio.h>

// �Y���Y�ɮ׻P�t�J���Y�ɪ����b�P�@�ӥؿ��U�A����N�ϥ����޸� "" �ӥ]�A
// ���Y�ɮצW�١A�p�G�O�зǩαM�ױM�ݪ����Y�ɡA�Ҧp C ���зǼ��Y�ɡA����
// �h�ϥΨ��A�� <> �ӬA��A�sĶ���b�M��ɴN�|�q�]�w���ؿ����}�l�M��C
#include "math.h"

int main(){
    // �禡���զ��D�n�]�A�|�ӳ����G��^�ȡB�禡�W�١B�ѼƦC�P�禡�D��C
    // �e�T�̺٬��禡�ŧi�Ψ禡�쫬�]Function prototype�^�C
    
    // C �y���W�w�A�p�G�禡�O�b main �����@�A
    // �����b main ���e�i��ŧi�A�_�h�|�X�{�sĶ���~�C

    // �禡�쫬�w�q�F�禡���~�[�A�q�`�w�q�b�W�ߪ����Y�ɡA
    // �ӳQ�t�J�C�ӷQ�I�s�禡���ɮפ��C

    // �b C ���p�G�I�s�禡���Ǧ^����ȡA�h�ŧi�� void�C
    // �Y���ǤJ����޼ơA�h�ѼƦC�O���ťէY�i�A�]�i�H�ϥ� void �ӥ[�H�����C
    // ���Y�ɮ׳Q�x�s�� .h �ɮסA���ۥi�H�ھڨ禡�쫬�ӹ�@�禡�D��C

    int num = 0;
    int p = 0;

    printf("��J�ƭȡG");
    scanf("%d", &num);

    printf("��J����G");
    scanf("%d", &p);

    printf("%d ����G%d\n", num, power2(num));
    printf("%d �� %d ���� %d\n", num, p, power(num, p));


    return 0;
}

// How to use (in this example)?

// 1.
// in terminal, input command "gcc math.c FunctionABC.c".
// generated a.exe(or a.out).
// execute a.exe(or a.out).

// 2.
// in terminal, input command "gcc -c math.c FunctionABC.c".
// generated math.o and FunctionABC.o in same folder.
// input command "gcc math.o FunctionABC.o".
// generated a.exe(or a.out).
// execute a.exe(or a.out).