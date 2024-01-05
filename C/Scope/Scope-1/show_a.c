#include "show_a.h"
#include <stdio.h> // 因為 printf() 定義於此

int a = 101;

void ashow(void){
    printf("這裡的 a 為 %d\n", a);
}