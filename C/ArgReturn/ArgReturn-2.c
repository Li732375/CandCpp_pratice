#include <stdio.h>
#include <stdlib.h>

int* ints(int, int);

int main(){
    // �禡�]�i�H�Ǧ^��}�A�o�N���۩I�s�̥i�H��Ӧ�}���ȩ��ܧ�A�Ҧp�U�����{�����A
    //�b�禡���ʺA�t�m�s�� int �Ŷ��A�öǦ^�Ŷ�����}
    int size = 0;
    int init = 0;

    printf("�}�C�j�p�G");
    scanf("%d", &size);
    printf("������ȡG");
    scanf("%d", &init);    

    int *arr = ints(size, init);
    for(int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    free(arr);

    return 0;
}

// �ѩ�ϥΰʺA�t�m���覡�A�Q�t�m���Ŷ��b�禡����L��A���|�۰ʲM���A
// �i�H�����Ǧ^��}���I�s�̡C
int* ints(int size, int init) {
    int *arr = malloc(size * sizeof(int));
    for(int i = 0; i < size; i++) {
        arr[i] = init;
    }
    return arr;
}

// �p�G�O���U�d�ҡA�}�C�Ŷ��|�b�禡���槹��M���A�sĶ���|���Xĵ�T�A
// �Ǧ^���ЭȤ]�N�S���N�q�A�]�|�y���s�����~�C
// (��:�å���D�{�� main() �����I�s)
int* ints2(int size, int init) {
    int arr[size];
    for(int i = 0; i < size; i++) {
        arr[i] = init;
    }
    return arr; // [warning]: function returns address of local variable
}