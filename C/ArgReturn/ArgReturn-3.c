#include <stdio.h>

// ��M�A�o�N�g���F���׸�T�C
void printInts(int arr[5]) {
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// �t�@�Ӥ覡�O���w���סC

// �]�� C99 �H��A�h�ƽsĶ���䴩�i�ܪ��ת��}
// �C���A�]variable length array type�^�A
// �ӰO�o len �Ѽƥ������X�{�A�sĶ���ݨ��~
// ��Ω����ѼơC
void printInts_1(int len, int arr[len]) {
    for(int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// �ѩ� C11 �N�i�ܪ��ת��}�C���A�Хܬ��D���n�\��A
// �p�G�sĶ���u�����䴩�A�i�H�ϥζǻ��}�C��}����
// ���C
void printInts_2(int len, int *arr) {
    for(int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void){
    // �p�G�n�ǻ��}�C���禡�A�覡���@�O���T�ŧi�}�C���A�A�o�����]�t�}�C����
    int arr[] = {1, 2, 3, 4, 5};

    printInts(arr);
    printInts_1(5,arr);
    printInts_2(5, arr);

    // int[] �૬�O���n���A�sĶ���ݭn�o����T���D�o�O�� int �}�C�C
    printInts_2(5, (int[]) {5, 4, 3, 4, 5});

    return 0;
}