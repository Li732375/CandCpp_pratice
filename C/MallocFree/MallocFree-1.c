#include <stdio.h>

#include <stdlib.h>

int main(){
	// �Y�n�ʺA�t�m�s��Ŷ��A�÷��G���}�C�Ӿާ@�A
	// �O�o�G���]�Φh���^�}�C�A�N�O�H�}�C���}�C�ӹ�
	// �@�C
	int **arr = calloc(2, sizeof(int*));

	// �{�b arr[0]�Barr[1] �i�H���O�x�s�ʺA�t�m int* �Ŷ�����}�A
	// �Y�C�q�n�������@���}�C�����׬O 3 (�}�C�����Ӽ�)�A�i�H�p�U��
    // �A�t�m�A�ñN�������@���}�C�C�Ӥ�����l�]�� 0�C
	for(int i = 0; i < 2; i++) {
    	arr[i] = calloc(3, sizeof(int));
	}
    
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        putchar('\n');
    }

    for(int i = 0; i < 2; i++) {
        free(arr[i]);
    }
    free(arr); 

	return 0;
} 
