#include <stdio.h>
#define N 5

int main(){
	double sum =0;
	double a[N];
	
	int i;
	/*
	for (i =0; i <N; i++){
		printf("輸入第 %d 個數字:", i +1);
		scanf("%lf", &a[i]);
		sum += a[i];
	}
	
	printf("平均值為 %lf", sum/N);
	*/
	
	//
	for (i =0; i <N; i++){
		//scanf("輸入第 %d 數字 %lf", i, &a[i]);
		scanf("輸入數字 %lf", &a[i]);
		sum += a[i];
	}
	
	printf("平均值為 %lf", sum/N);
	
	
	
	return 0;
} 
