#include <iostream>

// 需要線性、長度可變的資料容器，可以使用 vector
#include <vector>
using namespace std;

int main() {
    vector<int> number = {10, 20, 30};

    for(auto n : number) {
        cout << n << " ";
    }
    cout << "\n";

    for(int i = 0; i < number.size(); i++) {
        cout << number[i] << " ";
    }
    cout << "\n";

    for(int i = 0; i < 5; i++) {
        // 新增元素，可以使用 push_back、insert 方法
        number.push_back(i);
    }

    for(int n : number){
        cout << n << " ";
    }
    cout << "\n\n";

    while(!number.empty()) {
        int n = number.back();

        // 想取出最後一個元素可以用 pop_back
        number.pop_back();
        cout << "final element " << n << "\n";        
    }
    cout << "never element!\n\n";

    for(int i = 0; i < 5; i++) {
        // 新增被掏空的元素
        number.push_back(i * 2);
    }

    // 可以指定初始的長度，每個元素會被初始為指定型態的零值
    vector<int> v1(10);

    cout << "v1 ";
    for(int n : v1) {
        cout << n << " ";
    }
    cout << "\n";

    // 也可以在指定初始長度的同時，指定每個元素的初值
    vector<int> v2(10, 5); // 元素初值都是 5

    cout << "v2 ";
    for(int n : v2) {
        cout << n << " ";
    }
    cout << "\n";

    // 可以使用另一個 vector 作為引數來建構（v2 -> v3）
    vector<int> v3(v2);

    cout << "v3 ";
    for(int n : v3) {
        cout << n << " ";
    }
    cout << "\n";

    // 將 v3 內容調整一下。
    for(int i = 0; i < v3.size(); i++){
        v3[i] += i;
    }
    cout << "v3' ";
    for(int n : v3) {
        cout << n << " ";
    }
    cout << "\n";
    // 指定來源 vector 的某個範圍建構出新的 vector，
    // 必須指定起始位置的 iterator 與結束位置的 iterator。
    vector<int> v4(v3.begin() + 2, v3.end()); 
    // begin 與 end 方法分別傳回起始位置的 vector<int>::iterator 
    // 與結束位置的 vector<int>::iterator，可以把它們看成代表首個
    // 元素與最後一個元素的位置，對它們進行 + 或 - 運算，表示元素的
    // 位移量，操作上很像指標，至於是不是真的指標，要看底層的實作而
    // 定。

    // 就 API 的設計來說，不建議將 begin、end 方法的傳回值看成是指
    // 標，而建議將之看成迭代器（iterator），這些迭代器重載了相關的
    // 運算子，令其看來像是指標操作，因為容器相關的程式庫，為基於這
    // 類操作協定，令提供的 API 具有通用性。

    cout << "v4 ";
    for(int n : v4) {
        cout << n << " ";
    }
    cout << "\n\n";

    cout << "v4 ";
    // 若要使用迭代器來走訪元素，例如，先前的 for range 語法，
    // 若要使用 begin 與 end 方法，可以搭配 for 迴圈。
    for(vector<int>::iterator it = v4.begin();
        it != v4.end();
        it++) {
        int n = *it;
        cout << n << " ";
    }
    cout << "\n\n";

    // 若要使用陣列的元素來建構 vector。
    int number_1[] = {10, 20, 30, 40, 50};
    cout << "number_1 ";
    vector<int> v(begin(number_1) + 2, end(number_1)); // 包含 30, 40, 50
    for(int n: v){
        cout << n << " ";
    }
    cout << "\n\n";


    return 0;
}