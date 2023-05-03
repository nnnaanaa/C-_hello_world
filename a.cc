#include <iostream>
#include "a.h"

void sample() {
	std::cout << "Hello C++" << std::endl;
}

void HelloWorld(int n) {
    for (int i = 0; i < n; ++i) {
        // std::cout << "[" << i << "] " << "Hello World!" << std::endl;
    }
}

int Add(int x, int y) {
    return x + y;
}

void PrintArray(const int* x, std::size_t num) {
    for (std::size_t i = 0; i < num; ++i) {
        std::cout << x[i] << std::endl;
    }
}