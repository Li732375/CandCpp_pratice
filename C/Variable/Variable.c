#include <stdio.h>

int main(){
	// 一個變數關聯一個資料型態、儲存的值與儲存空間的位址值。
	
	// 資料型態決定了變數分配到的記憶體大小；變數儲存的值是指
	// 儲存於記憶體中的某個數值。
	
	// 可使用 int、float、double、char 等關鍵字（Keyword）來
	// 宣告變數名稱並指定資料型態，變數在命名時有些規則，不可
	// 以使用數字作為開頭，也不可以使用特殊字元，像是 *&^% 之
	// 類的字元，而變數名稱不可以與 C 內定的關鍵字同名，例如 
	// int、float、struct 等。
	
	// 宣告一個變數，就會配置一塊記憶體空間給變數，空間長度依
	// 宣告時的資料型態而定，被配置的這塊空間中原先可能就有資
	// 料，也因此變數在宣告後的值是不可預期的，所以應該在在變
	// 數宣告後初始其值，可以使用指定運算子（Assignment operator）= 
	// 來指定變數的值。
	
	int age;
	double score;
	char level;
	
	printf("\n年級\t得分\t等級");
	// 使用格式指定字 %f，其中再加上 .2，表示顯示浮點數時只顯
	// 示至小數後第二位。 
	printf("\n%d\t%.2f\t%c", age, score, level);

	age = 7;
	score = 3.564;
	level = 'f';
	
	printf("\n年級\t得分\t等級");
	printf("\n%d\t%.2f\t%c", age, score, level);
	
	
	// 有時候一但將數值指定給變數之後，就不允許再重新指定給同
	// 一變數，這時可以在宣告變數時使用 const 關鍵字來限定。
	const double pi = 3.14;
	//pi = 3; // [Error] assignment of read-only variable 'pi'
	
	// 如果要宣告無號的整數變數，則可以加上 unsigned 關鍵字。
	unsigned int i;
	// bool 型態的變數雖然也可視為整數型態，但不能在宣告變數時
	// 加上 unsigned 來修飾。
	
	return 0;
}
