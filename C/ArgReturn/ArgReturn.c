#include <stdio.h>

int increment(int n);

int main(){
    // �޼ƶǻ��O�ǰe�ȵ��禡�W�������ѼơA�ȷ|�ƻs�@�����ѼơA
    // �ӷ��ܼƻP�������ѼƦU���@�ӰO�����}�A�����ۤz�C

    int x = 10;

    printf("�禡���� x �� %d\n", increment(x));
    printf("�ŧi�� x �� %d\n", x);

    return 0;
}

int increment(int n) { 
    n = n + 1; 
    return n; 
}