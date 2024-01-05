#include <stdio.h>

int main(){
	// 
	
	// C 沒有二維陣列這種東西，二維或多維陣列的概念，是以陣列的陣列（arrays of arrays）來實現。
	int ROWS = 3, LEN = 3;
	int maze[ROWS][LEN] = {
                                {1, 2, 3},
                                {4, 5, 6}
                          };

    printf("ROWS: %d\n", sizeof(maze) / sizeof(maze[0]));
    printf("LEN: %d\n\n", sizeof(maze[0]) / sizeof(maze[0][0]));
    
    printf("ROWS: %d\n", *(&maze + 1) - maze);
    printf("LEN: %d\n", *(&maze[0] + 1) - maze[0]);
    
    // 若不管長度資訊會失去的問題，也可以如下模擬二維陣列
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
    
    // 示範了如何取得二維陣列中的每一列，並保留長度資訊
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
	
	// 若要完全基於指標來迭代陣列，而不依靠索引
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
