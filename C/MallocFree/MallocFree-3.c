#include <stdio.h>

#include <stdlib.h>

int main(){
	// �p�G�n���ܤw�t�m���O����j�p�A�i�H�ϥ� realloc
    int size = 0;

    printf("�}�C���סG");
    scanf("%d", &size);
    int *arr1 = calloc(size, sizeof(int));

    printf("���w�������e���G\n");
    for(int i = 0; i < size; i++) {
        printf("arr1[%d] = ", i);
        scanf("%d" , arr1 + i);
    }

    printf("��ܤ����G\n");
    for(int i = 0; i < size; i++) {
        printf("arr1[%d] = %d\n", i, *(arr1 + i));
    }

    int *arr2 = realloc(arr1, sizeof(int) * size * 2);
    printf("��ܤ����G\n");
    for(int i = 0; i < size * 2; i++) {
        printf("arr2[%d] = %d\n", i, *(arr2 + i));
    }

    printf("arr1 ��}�G%p\n", arr1);
    printf("arr2 ��}�G%p\n", arr2);

    free(arr2);

    // �n�`�N���O�A�W�Ҥ��A���s�t�m�᪺��}�ä��O�ҬۦP�A
    // realloc �|�ƻs��ƨӧ��ܰO���骺�j�p�A�Y���}��
    // �������Ŷ��A�ϥέ��}�վ�O���骺�j�p�A�Y�Ŷ�����
    //�A�|���s�M�䨬�����Ŷ��Ӷi��t�m�A�b�o�ӱ��p�U�A
    // realloc �e�¦�}���Ŷ��|�Q���񱼡A�]�N�O���A����
    // �ϥ� realloc �Ǧ^���s��}�A�Ӥ��Өϥ��¦�}�A�Y 
    // realloc ���ѷ|�Ǧ^�ū��С]null�^�A�]���̦n���}
    // �i���ˬd�C

    // ���ʺA�t�m���O����A�Y���ӫ��ЬO�ߤ@���V�귽��}
    // �A�i�H�ϥ� restrict �׹��C
    int *restrict p = calloc(1, sizeof(int));

    // �Q restrict �׹������СA��ܥѶ}�o�̫��ܽsĶ���A
    // �o�Ӹ귽�u�Ѹӫ��Цs���A�p���@�ӡA�sĶ���N�����|
    // �i��̨ΤơA�ߤ@�ʬO�Ѷ}�o�̴x���A�sĶ�����|�ˬd
    // �Q restrict �׹������СA���V���귽�O�_�Q��L��
    // �Ы��V�C

    // restrict ��{���X�\Ū�W�A�]�㦳�����}�o�̪��@�ΡA
    // ��ܤ��Ӧ���L�����x�s�ۦP�귽����}�A�b�禡ñ�p�W
    // �A�]�i���ܦh�Ӹ귽����}�����O�W�ߪ�
    // �Ҧp strcpy ��ñ�p�A�n���F dest �P src �������P

    // char *strcpy( char *restrict dest, const char *restrict src );

	return 0;
} 
