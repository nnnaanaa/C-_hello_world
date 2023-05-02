#include <iostream>

void HelloWorld(int n);  // 前方宣言
int Add(int x, int y);

enum Day {
    Sun = 1,  // 1
    Mon,      // 2
    Tue,      // 3
    Wed = 8,  // 8
    Thu,      // 9
    Fri,      // 10
    Sat       // 11
};

int main(int argc, char* argv[]) {
    std::cout << "Hello, World!" << std::endl;

    /* リテラル */
    Day day = Fri;
    std::cout << day << std::endl;

    /* ポインタの使い方 */
    int x = 20;
    int* p = &x;
    int y = *p;

    std::cout << y << std::endl;

    /* 繰り返し処理 */
    bool done = false;
    while (!done) {
        x += x - 3;
        std::cout << x << std::endl;

        if (x % 5 == 0) {
            done = true;
        }
    }

    y = 2;
    HelloWorld(y);

    // int (*fp)(int, int) = Add;  // 関数 Add のアドレスを保持する関数ポインタ fp
    auto fp = Add;
    int result = fp(3, 5);      // 関数ポインタ fp を介して関数 Add が実行される
    std::cout << result << std::endl;  // 8

    return 0;
}

void HelloWorld(int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << "[" << i << "] " << "Hello World!" << std::endl;
    }
}

int Add(int x, int y) {
    return x + y;
}