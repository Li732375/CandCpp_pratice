#include <stdio.h>

int main(){
	// 
	
	// C �S���G���}�C�o�تF��A�G���Φh���}�C�������A�O�H�}�C���}�C�]arrays of arrays�^�ӹ�{�C
	int ROWS = 3, LEN = 3;
	int maze[ROWS][LEN] = {
                                {1, 2, 3},
                                {4, 5, 6}
                          };

    printf("ROWS: %d\n", sizeof(maze) / sizeof(maze[0]));
    printf("LEN: %d\n\n", sizeof(maze[0]) / sizeof(maze[0][0])); 
    
    printf("ROWS: %d\n", *(&maze + 1) - maze);
    printf("LEN: %d\n", *(&maze[0] + 1) - maze[0]);
    
    // �Y���ު��׸�T�|���h�����D�A�]�i�H�p�U�����G���}�C
    int row3[LEN] = {1, 2, 3};
    int row4[LEN] = {4, 5, 6};
    int* maze1[ROWS] = {row3, row4};

    for(int i = 0; i < ROWS; i++) {
        int *row = maze1[i];
        for(int j = 0; j < LEN; j++) {
            printf("%d\t", row[j]); 
        }
        printf("\n");
    } 
    
    // �ܽd�F�p����o�G���}�C�����C�@�C�A�ëO�d���׸�T
    int maze2[ROWS][LEN] = {
                              {1, 2, 3},
                              {4, 5, 6}
                          };

    for(int i = 0; i < ROWS; i++) {
        int (*row)[LEN] = &maze2[i];
        for(int j = 0; j < LEN; j++) {
            printf("%d\t", (*row)[j]); 
        }
    printf("\n");
	
	// �Y�n���������Шӭ��N�}�C�A�Ӥ��̾a����
	int maze3[ROWS][LEN] = {
                                {1, 2, 3},
                                {4, 5, 6}
                          };

    int(*mazeBegin)[LEN] = maze3;
    int(*mazeEnd)[LEN] = *(&maze3 + 1);
    for(int(*row)[LEN] = mazeBegin; row < mazeEnd; row++) {
        int *begin = *row;
        int *end = *(row + 1);
        for(int* it = begin; it < end; it++) {
            printf("%d\t", *it); 
        }
        printf("\n");
    } 
	return 0;
}
