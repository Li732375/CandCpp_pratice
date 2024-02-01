#include <iostream>
#include <string> 
#include <chrono>
#include <random>
#include <functional>
using namespace std;

function<int()> rand(int from, int to) {
    unsigned seed = chrono::system_clock::now()
                        .time_since_epoch().count(); // 隨機數種子
    default_random_engine uniform(seed);             // 產生均勻分佈隨機數的引擎
    uniform_int_distribution<int> dist(from, to);    // 範圍為 0 到 9 均勻分佈
    return bind(dist, uniform);                      // 綁定引擎與範圍
}

class GuessGame {
    public:
        void go() {
            function<int()> randZeroToNine = rand(0, 9);

            int number = randZeroToNine();
            int guess = 0;
            do {
                this->print("輸入數字：");
                guess = this->nextInt();
            } while(guess != number);
            println("猜中了！");
        }

        void println(string text) {
            this->print(text + "\n");
        }

        virtual void print(string text) = 0;
        virtual int nextInt() = 0;

        virtual ~GuessGame() = default;
};

class ConsoleGame : public GuessGame {
    public:
        void print(string text) {
            cout << text;
        }

        int nextInt() {
            int guess = 0;
            cin >> guess;
            return guess;
        }
};

int main() { 
    GuessGame &&game = ConsoleGame();
    game.go();

    return 0;
}