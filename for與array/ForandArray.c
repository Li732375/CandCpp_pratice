#include <stdio.h>
#define N 5

int main(){
	double sum =0;
	double a[N];
	
	int i;
	/*
	for (i =0; i <N; i++){
		printf("��J�� %d �ӼƦr:", i +1);
		scanf("%lf", &a[i]);
		sum += a[i];
	}
	
	printf("�����Ȭ� %lf", sum/N);
	*/
	
	//
	for (i =0; i <N; i++){
		//scanf("��J�� %d �Ʀr %lf", i, &a[i]);
		scanf("��J�Ʀr %lf", &a[i]);
		sum += a[i];
	}
	
	printf("�����Ȭ� %lf", sum/N);
	
	
	
	return 0;
} 
