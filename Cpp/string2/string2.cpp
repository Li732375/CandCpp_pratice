#include <iostream>

// 可以使用這個類別來建立字串，
// 便於進行高階的字串操作，像是
// 字串指定、串接等，若要表現字
// 串，C++ 建議使用 string。
#include <string>
using namespace std;

int main(void){
    // 宣告字串
    string str1;                 // 內容為空字串
    string str2("caterpillar");  // 內容為指定的字串常量
    string str3(str2);           // 以 str1 實例建立字串
    string str4 = "Justin";      // 內容為指定的字串常量

    // 使用 empty() 測試字串是否為空。
    cout << "str1 是否為空：" << str1.empty() << endl; 
    
    // 可以使用 size() 或 length() 來取得字串長度。
    cout << "str1 長度: " << str1.size() << endl; 
    cout << "str2 長度: " << str2.size() << endl;
    cout << "str3 長度: " << str3.size() << endl;

    // 使用 == 比較兩個字串的內容是否相同。
    cout << "str1 與 str2 內容是否相同：" << (str1 == str2) << endl; 
    cout << "str2 與 str3 內容是否相同：" << (str2 == str3) << endl;

    // 將字串指定給另一個字串

    // 若原先 str5 空間不足，則會釋出空間並重新成立同 str4 大小的空間再行複製。
    string str5 = str4;
    cout << "str5 " << str5 << "\n";

    // 將一個 C 風格的字串指定給 string。
    char str[] = "Justin";
    string name = "caterpillar";
    name = str;

    // 但不能將一個 string 實例指定給字元陣列。
    char str6[] = "Justin";
    string name2 = "caterpillar";
    //str6 = name2; // error

    // 使用 + 運算子來串接字串。
    str1 = str1 + str2;
    str1 = str1 + "Wulala";

    // 可以使用 [] 指定索引來存取相對應位置的 char，就有如字元陣列的操作。
    string name3 = "findWorkMan";

    cout << "name3 ";
    for(int i = 0; i < name3.length(); i++) {
        cout << name3[i] << " ";
    }
    cout << "\n";

    // 循序走訪
    cout << "name3 ";
    for(auto ch : name3) {
        cout << ch << " ";
    }
    cout << "\n";

    return 0;
}