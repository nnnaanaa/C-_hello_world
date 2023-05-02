#include <iostream>

enum Day {
    Sun = 1,  // 1
    Mon,      // 2
    Tue,      // 3
    Wed = 8,  // 8
    Thu,      // 9
    Fri,      // 10
    Sat       // 11
};

int main() {
    std::cout << "Hello, World!" << std::endl;

    Day day = Fri;
    std::cout << day << std::endl;

    int x = 5;
    int* p = &x;
    int y = *p;

    std::cout << y << std::endl;

    return 0;
}