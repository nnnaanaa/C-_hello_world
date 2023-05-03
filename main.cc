#include <iostream>
#include <array>
#include <vector>
#include <fstream>
#include <string>


#include "a.h"

void HelloWorld(int n);  // 前方宣言
int Add(int x, int y);
void PrintArray(const int* x, std::size_t num);

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
    //// std::cout << "Hello, World!" << std::endl;

    ///* リテラル */
    //Day day = Fri;
    ////std::cout << day << std::endl;

    ///* ポインタの使い方 */
    //int x = 20;
    //int* p = &x;
    //int y = *p;

    //// std::cout << y << std::endl;

    ///* 繰り返し処理 */
    //bool done = false;
    //while (!done) {
    //    x += x - 3;
    //    // std::cout << x << std::endl;

    //    if (x % 5 == 0) {
    //        done = true;
    //    }
    //}

    //y = 2;
    //HelloWorld(y);

    //// int (*fp)(int, int) = Add;  // 関数 Add のアドレスを保持する関数ポインタ fp
    //auto fp = Add;
    //int result = fp(3, 5);      // 関数ポインタ fp を介して関数 Add が実行される
    //// std::cout << result << std::endl;  // 8

    //int xl[] = { 2, 4, 6, 8, 10 };
    //int* pp = xl;
    //std::cout << *pp << std::endl;        // 2
    //std::cout << *(pp + 1) << std::endl;  // 4
    //std::cout << *(pp + 2) << std::endl;  // 6
    //std::cout << *(pp + 3) << std::endl;  // 8
    //std::cout << *(pp + 4) << std::endl;  // 10

    //std::array<int, 3> arr2_1{};
    //std::array<int, 3> arr2_2 = arr2_1;//OK

    //std::cout << arr2_2[0] << std::endl;

    //std::string s = "Hello";
    //std::cout << s.size() << std::endl;   // 5


    //std::vector<int> x = { 0, 1, 2, 3, 4 };
    //for (auto it = x.begin(); it != x.end(); ++it) {
    //    std::cout << *it << std::endl;
    //}

    /* ファイル分割テスト */
    sample();

    /* ファイル書き出しのテスト */
    std::ofstream file("fruits.txt");  // 書き出すファイルのパスを指定
    std::vector<std::string> fruits = { "apple", "strawberry", "pear", "grape" };

    for (const auto fruit : fruits) {
        file << fruit << std::endl;  // 書き出し
    }

    return 0;
}
