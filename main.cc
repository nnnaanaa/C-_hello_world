#include <iostream>

void HelloWorld(int n);  // �O���錾
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

    y = 2;
    HelloWorld(y);

    // int (*fp)(int, int) = Add;  // �֐� Add �̃A�h���X��ێ�����֐��|�C���^ fp
    auto fp = Add;
    int result = fp(3, 5);      // �֐��|�C���^ fp ����Ċ֐� Add �����s�����
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