#include <stdio.h>

#include <stdlib.h>

int main(){
	// �ܼƫإ߫�|�t�m�O����Ŷ��A�o���귽�O�t�m�b�O���骺���|�ϡ]Stack�^�A
	// �ͩR�g���]����禡��������A�]�N�O�禡����L��A�t�m���Ŷ��N�|�۰ʲM���C
	
	// �Y�n�N�禡���浲�G�Ǧ^�A���ઽ���Ǧ^�o���Q�۰ʰt�m�Ŷ�����}�A�]���禡
	// ����L��A�ӪŶ��N�|���X�A�禡�I�s�̫���Y�z�L��}���γo�Ǹ귽�A�|�o��
	// ���i�w�������G�C�p�A���ઽ���N�ϰ�إߪ��ܼƦ�}�ΰ}�C��}�Ǧ^�C

	// �}�o�̱o�ۦ�b�ݭn���ɭ԰t�m�O����A�o�ǰO����|�Q�t�m�b��n�ϡ]Heap�^�A
	// ���|�۰ʲM���A�}�o�̱o�b���ϥθ귽�ɦۦ�����O����C

	// C �i�H�ϥ� malloc�A���w�q�b stdlib.h�A�|�Ҩӻ��A
	// �i�H�b�{�����H�ʺA�覡�t�m�@�� int ���A�j�p���O����C

	// malloc �|�t�m�@�� int �ݭn���Ŷ��A�öǦ^�ӪŶ�����}�A
	// �i�H�ϥΫ��� p ���x�s��}�C
	int *p = malloc(sizeof(int));

	// �N C11 �W�d�ӻ��Amalloc �u�t�m�Ŷ�������l�Ŷ����ȡA
	// �Y�n�b�t�m������w�]�����A���s�ȡA�i�H�ϥ� calloc�C
	int *p1 = calloc(1, sizeof(int));


	int *p1 = malloc(100); // 100 bytes

    printf("�Ŷ���}�G%p\n", p1);
    printf("�x�s���ȡG%d\n", *p1);

    *p1 = 200; 

    printf("�Ŷ���}�G%p\n", p1);
    printf("�x�s���ȡG%d\n", *p1);

	// �Y�n����O����A�i�H�ϥ� free �禡
    free(p1);


	// �p�G�Q�t�m�s��ӫ��w���A���Ŷ�
	// �ʺA�t�m�F 1000 �� int �j�p���Ŷ��A�öǦ^�Ŷ���
	// �Ĥ@�Ӧ�}�A�t�m�᪺�Ŷ���ƬO������
	int *p2 = malloc(sizeof(int) * 1000); // 1000 �Ӿ��

	// �t�m�᪺�Ŷ���ƬO�������A�ϥ� calloc ��
	// �ŧi�Ŷ��t�m�A�C�� int �Ŷ��|�Q��l�Ƭ� 0�C
	int *p2 = calloc(1000, sizeof(int)); // ��l�� 1000 �Ӿ�Ƭ� 0


	// �N�ʺA�t�m�Ŷ��������}�C�Ӿާ@
	int size = 0;

    printf("��J��ư}�C����:");
    scanf("%d", &size);

    int *arr = malloc(size * sizeof(int));

    printf("���w�����G\n");

    for(int i = 0; i < size; i++) {
        printf("arr[%d] = ", i);
        scanf("%d" , arr + i);
    }

    printf("��ܤ����G\n");
    for(int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, *(arr+i));
    }

    free(arr);


	return 0;
} 
