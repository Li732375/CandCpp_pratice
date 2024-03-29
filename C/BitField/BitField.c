#include <stdio.h>
#include <stdbool.h>

enum modes {READ = 0b01, WRITE = 0b10, READ_WRITE = 0b11};

// 位元欄位（Bit-field）就是資料成員，然而被指定了可存放的位元數量，
// 也就是用來存放位元資料的值域，必須是整數或列舉，通常使用 unsigned。
typedef unsigned int Bit;
typedef const char* String;
typedef struct {
    // 每一個位元欄位在緊跟著的冒號後指定使用的位元數量，
    // 在允許的狀況下，連續宣告的位元欄位成員會緊鄰著被配
    // 置空間。

    // 位元欄位成員不可被 & 取址，也不可為靜態成員。
    Bit modified : 1;  // 使用 1 位元
    Bit mode     : 2;  // 使用 2 位元

    String filename;
} File;

bool isRead(File *file) {
    return file->mode & READ; // & 的作用是?
}

bool isWrite(File *file) {
    return file->mode & WRITE;
}    

void write(File *file, String text) {
    if(!isWrite(file)) {
        printf("%s:read-only", file->filename);
    }
    file->modified = 0b01;
    // ...
}

int main() { 
    File foo1 = {.filename = "foo1", .mode = READ};
    File foo2 = {.filename = "foo2", .mode = READ_WRITE};

    write(&foo1, "XD");

    return 0; 
}