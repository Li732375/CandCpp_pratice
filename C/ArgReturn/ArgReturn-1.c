#include <stdio.h>

int increment(int *n);

int main(){
    // �b�ǭ����ΤW�A�]�i�H�N�ܼƪ���}�Ȩ��X�A�ǻ���}�ȵ����w�����аѼơA
    // �u�n�ϥ� & �B��l�N�i�H�F�C

    int x = 10;

    printf("�禡���� x �� %d\n", increment(&x));
    printf("�ŧi�� x �� %d\n", x);

    // �b�禡�W�ŧi���аѼƤ��ت��A�O�Ʊ�禡���i�H���ܰʦP�@��}���ȡA
    // �p���@�ӡA�I�s�̥i�H�O�d�禡���ܰʪ����G�C

    // �B�Ϊ��������@�O�AC �I�s�禡��u��Ǧ^�@�ӭȡA�Y�b�I�s�禡�ɡA
    // �Q���o��ӥH�W���B�⵲�G�A�N�i�H�ϥΫ��аѼơC

    return 0;
}

// �p�G�禡���Ǧ^�ȡA�ϥ� void ��ܤ��Ǧ^����ƭȡF�Y�禡�Ǧ^���A���� void�A
// �b�禡���@�w�n�ϥ� return �Ǧ^�ƭȡA�_�h�sĶ���|�^�����~�C
int increment(int *n) { 
    *n = *n + 1; 
    return *n; 
}