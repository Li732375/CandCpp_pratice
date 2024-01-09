#include <stdio.h>

// enum 列舉的成員，會有預設的對應整數，
// 無範疇的列舉成員，在必須取得整數值的
// 場合，會自動轉換為對應的整數，對應整
// 數預設由 0 開始。
enum Action {
    STOP, RIGHT, LEFT, UP, DOWN
};

// 也可以自行指定，後續列舉成員沒有設定
// 對應數值的話，會自動遞增 1，所以 
// RIGHT 為 2、LEFT 為 3，依此類推。
/*
enum Action {
    STOP = 1, RIGHT, LEFT, UP, DOWN
};
*/

// 列舉成員對應的常數值，不一定要有遞增關係。
/*
enum Action {
    STOP = 2, RIGHT = 1, LEFT = 3, UP, DOWN
};
// 注意到在這裡 UP = 4、DOWN = 5
*/

void play(enum Action action) {
    switch(action) {
        case STOP:
            puts("播放停止動畫");
            break;
        case RIGHT:
            puts("播放向右動畫");
            break;
        case LEFT:
            puts("播放向左動畫");
            break;
        case UP:
            puts("播放向上動畫");
            break;
        case DOWN:
            puts("播放向下動畫");
            break;
        default:
            puts("不支援此動作");
    }
} 

int main() { 
    play(RIGHT);
    play(LEFT);

    printf("\nSTOP：%d\n", STOP);
    printf("RIGHT：%d\n", RIGHT);
    printf("LEFT：%d\n", LEFT);
    printf("UP：%d\n", UP);
    printf("DOWN：%d\n\n", DOWN);

    printf("LEFT + 1 = %d\n\n", LEFT + 1);

    return 0; 
} 