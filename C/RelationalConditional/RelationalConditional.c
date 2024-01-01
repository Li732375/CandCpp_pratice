#include <stdio.h>

int main(){
	// C 中也提供關係運算子（Relational operator）或比較運算子（Comparison operator），
	// 它們有大於（>）、不小於（>=）、小於（<）、不大於（<=）、等於 （==）以及不等於（!=）。
	
	printf("10 > 5\t\t%d\n", 10 > 5);
	printf("10 >= 5\t\t%d\n", 10 >= 5);
	printf("10 < 5\t\t%d\n", 10 < 5);
	printf("10 <= 5\t\t%d\n", 10 <= 5);
	printf("10 == 5\t\t%d\n", 10 == 5);
	printf("10 != 5\t\t%d\n\n", 10 != 5);
	
	// 條件運算子（Conditional operator）
	// 條件式 ? 成立傳回值 : 失敗傳回值
	int score = 0;

    printf("輸入學生分數：");
    scanf("%d", &score);

    printf("該生是否及格？%c\n\n", score >= 60 ? 'Y' : 'N');
	
	
	int input = 0;

    printf("輸入整數：");
    scanf("%d", &input);

    printf("該數為奇數？%c\n", input % 2 ? 'Y' : 'N');
	
	return 0;
} 
