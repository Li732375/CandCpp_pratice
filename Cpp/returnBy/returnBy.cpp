#include <iostream> 
using namespace std; 

// 定義函式時，必須定義傳回值型態，如果函式不傳回值，
// 使用 void 表示不傳回任何數值；若定義了傳回值型態
// 不為 void，函式最後要使用 return 傳回數值，否則
// 編譯器失敗。

// 傳回值與函式定義的傳回值型態之間的行為，類似 = 指定
// 時運算式與變數之間的關係，因此也可以定義傳回值型態
// 為指標、lvalue 參考、rvalue 參考等。

// 如果傳回位址，那麼傳回值型態可定義為指標型態，
// 這代表著記憶體位址在函式執行完畢後，必須仍是有
// 效的，也就是說這通常代表著，函式內動態配置記憶
// 體。

// 也可以定義傳回值型態為 lvalue 參考或 rvalue 參考，
// 然而類似地，不該將區域變數以 lvalue 參考傳回，或者
// 將常量以 rvalue 參考傳回，因為函式執行完畢後，區域
// 變數、常量的記憶體就會被回收了。
int* makeArray(int m, int initial = 0) { 
    // 如果不是使用 new 來動態配置，在函式中宣告的變數記憶體，
    // 在函式執行結束後會自動消毀，傳回位址就沒有意義，編譯器
    // 會提出警訊，執行時期往往也會造成存取錯誤。
    int *a = new int[m]; // 動態配置變數，不會於函式消失後失去。

    for(int i = 0; i < m; i++) {
        a[i] = initial; 
    }
    return a; 
}

void deleteArray(int* arr) {
    delete [] arr; // 移除動態變數
}

string longerStr(string s1, string s2) {
    return s1.length() > s2.length() ? s1 : s2;
}

// 定義傳回型態為 lvalue 參考通常是為了效率。
string& longerStr_1(string &s1, string &s2) {
    return s1.length() > s2.length() ? s1 : s2;
}

auto& longerStr_2(const string &s1, const string &s2) {
    return s1.length() > s2.length() ? s1 : s2;
}

string&& concat(string &&lhs, string &rhs) {
    lhs += rhs;
    return std::move(lhs);
}

int main() { 
    int m = 0; 

    cout << "陣列大小: "; 
    cin >> m; 

    int *arr = makeArray(m); 

    for(int i = 0; i < m; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl; 
    }

    deleteArray(arr);

    // 以字串來說
    string s1 = "Justin Lin";
    string s2 = "Monica Huang";
    
    // 在傳遞引數或傳回值時，都會發生 string 內容的複製。
    string s3 = longerStr(s1, s2);
    cout << s3 << endl;

    // 傳回較長的實例，複製內容若是多餘的，可以改為。
    string &s4 = longerStr_1(s1, s2);
    cout << s4 << endl;

    // C++ 14 開始，在前後文可以推斷型態的情況下，傳回值型態可以使用 auto。
    auto &s5 = longerStr_2(s1, s2);
    cout << s5 << endl;

    // 類似地，定義傳回值型態為 rvalue 參考，通常也是為了效率。
    string s = "++";

    // 引數 "C" 是個常量，參數 lhs 接管了該常量，
    // 因為函式執行完之後，lhs 生命周期也就結束，
    // 不會再使用，使用 std::move 將 lhs 當成是 
    // rvalue 傳回，因此 lhs 的內容將移動至 result，
    // 而不是複製至 result，如果最後傳回的 lhs 
    // 是個很長的字串，效率上會比較好。
    string result = concat("C", s);
    cout << result << endl;

    return 0; 
} 