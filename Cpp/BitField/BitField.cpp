#include <iostream> 
#include <string>
#include <stdexcept>
using namespace std; 

using Bit = unsigned int;
class File {
    // 每一個位元欄位在緊跟著的冒號後指定使用的位元數量，
    // 在允許的狀況下，連續宣告的位元欄位成員會緊鄰著被配置空間。
    Bit modified : 1;  // 使用 1 位元
    Bit mode     : 2;  // 使用 2 位元

    // 位元欄位成員不可被 & 取址，也不可為靜態成員。

    const string &filename;

    public:
        enum modes {READ = 0b01, WRITE = 0b10, READ_WRITE = 0b11};

        File(const string &filename, modes mode) : filename(filename), mode(mode) {}

        bool isRead() {
            return this->mode & READ;
        }

        bool isWrite() {
            return this->mode & WRITE;
        }    

        void write(const string &text) {
            if(!this->isWrite()) {
                throw runtime_error(this->filename + ":read-only");
            }
            this->modified = 0b01;
            // ...
        }

        //...
};

int main() { 
    File foo1("foo1", File::READ);
    File foo2("foo2", File::READ_WRITE);

    foo2.write("XD");

    return 0;
}