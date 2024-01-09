#include <stdio.h>

// 與 enum-1.c 比較

const int Action_STOP = 0;
const int Action_RIGHT = 1;
const int Action_LEFT = 2;
const int Action_UP = 3;
const int Action_DOWN = 4;

void play(int action) {
    switch(action) {
        case 0:
            puts("播放停止動畫");
            break;
        case 1:
            puts("播放向右動畫");
            break;
        case 2:
            puts("播放向左動畫");
            break;
        case 3:
            puts("播放向上動畫");
            break;
        case 4:
            puts("播放向下動畫");
            break;
        default:
            puts("不支援此動作");
    }
} 

int main() { 
    play(Action_RIGHT);
    play(Action_LEFT);

    return 0; 
} 