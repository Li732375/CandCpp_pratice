// 在 C++ 中輸入輸出是由標準程式庫的 iostream 提供，
// 這也就是為何要在程式的一開頭加上這個。

#include <iostream>
using namespace std;

int main(void){
    // 標準輸出（Stand output）通常是指終端機，
    // C++ 藉由 iostream 的 ostream 物件 cout
    // （發音 see-out）將訊息輸出至終端機，
    // << 運算子的左運算必須是個 ostream，
    // 右邊是運算值。

    // << 運算子傳回左運算元作為結果。
    cout << "Hello! World!"; // // 標準輸出（Stand output）

    cout << "Hello! World!" << endl; // endl 有輸出換行並出清緩衝區的效果。
    // 等同
    (cout << "Hello! World!") << endl;

    // 在執行程式時，可以使用 >> 將輸出導向至指定檔案。（若編譯後執行檔名為 CinCout）
    // CinCout >> result.txt

    // ostream 物件 cerr（發音 see-err），稱為標準錯誤（Standard error），
    // 會將訊息輸出至終端機，與標準輸出不同的是，cerr 不會被重新導向。
    cerr << "Sorry! World!" << endl;

    // ostream 物件 clog（發音 see-log）也是寫到標準錯誤，用於輸出日誌訊息，
    // cerr 不經緩衝區，亦有人稱無緩衝標準錯誤，而 clog 會經過緩衝區，亦有人
    // 稱緩衝標準錯誤。

    // 要重新導向標準輸出是用 >，標準輸入則是 <，
    // 而 >> 除了重導標準輸出外，還有附加的功能，
    // 也就是會把輸出附加到被導向的目標檔案後頭，
    // 如果目標檔案本來不存在，那麼效果就和 > 一樣。


    // 若打算取得使用者的輸入，可以使用標準輸入（Standard input），
    // 這可以透過 iostream 的 istream 物件 cin（發音 see-in）與
    //  >> 運算子，>> 左運算元是個 istream，右邊是個變數，並傳回
    // 左運算元作為結果。
    int number = int();

    cout << "請輸入數字: "; 
    cin >> number;
    cout << "輸入的數字: " << number << endl;


    return 0;
}
