#include <stdio.h>

int main(){
	// �ŧi�}�C����A�ϥΨ�}�C�ܼƮɡA�|���o����������}�C
	int arr[10] = {0};
	
	// �}�C arr �P &arr[0] ���ȬO�ۦP���C 
    printf("arr :\t\t%p\n", arr);
    printf("&arr[0] :\t%p\n\n", &arr[0]); 
	
	// 
	int arr1[] = {10, 20, 30, 40, 50}; 
	int len = *(&arr1 + 1) - arr1;
	printf("arr1�����׬� %d\n\n", len);

	// �}�C���ި��O�۹�󭺤�����}���첾�q�C
	//int LEN = 10, arr2[LEN] = {0}; // [Error] variable-sized object may not be initialized
    int LEN = 10, arr2[LEN];
	int *p = arr2;
	
	int i = 0;
    for(i = 0; i < LEN; i++) {
        printf("&arr2[%d]: %p", i ,&arr2[i]);
        printf("\t\tptr + %d: %p\n", i, p + i);
    }
    printf("\n");
    
    
	return 0;
}
