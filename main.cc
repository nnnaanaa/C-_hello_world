#include <iostream>

void HelloWorld(int n);  // �O���錾

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

    /* ���e���� */
    Day day = Fri;
    std::cout << day << std::endl;

    /* �|�C���^�̎g���� */
    int x = 20;
    int* p = &x;
    int y = *p;

    std::cout << y << std::endl;

    /* �J��Ԃ����� */
    bool done = false;
    while (!done) {
        x += x - 3;
        std::cout << x << std::endl;

        if (x % 5 == 0) {
            done = true;
        }
    }

    HelloWorld(y);

    return 0;
}

void HelloWorld(int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << "[" << i << "] " << "Hello World!" << std::endl;
    }
}