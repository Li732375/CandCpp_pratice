#include <stdio.h>

// 若要使用命令列引數，可以在括號中如下填寫
int main(int argc, char *argv[]){ // 嚙諸潘蕭 argc 嚙瞌嚙瑾嚙諉橘蕭?嚙璀嚙瞌嚙踝蕭嚙磋嚙瞌嚙瘠嚙豬數迎蕭嚙諉數，嚙緻嚙諉數目包嚙璀嚙瘤嚙緹嚙踝蕭嚙磕嚙踝蕭
	
	int i = 0;
	for(i = 1; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
	
	return 0;
	
}

// 參數 argc 是一個整數，記錄命令列引數的個數，這個數目包括了程式名稱，例如下面的執行指令，argc 將記錄為 5
// prog hello.c -o  -c project.p

// 引數之間以空白作區隔，上面的命令包括程式名稱共會有五個引數

// argc 的值一定大於 1，因為至少包括了程式名稱，而 argv 分別儲存了引數的字串

// 若輸入是一個包括空白的字串，就使用 "" 來包括
// prog "This is a string!" 
