#include <iostream>

int main() {
    int a;
    std::cin >> a;
    for (int i = 1; i < a + 1; ++i) {
        for (int j = 1; j <= a - i; ++j) {
            std::cout << " ";
        }
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    for (int i = a - 1; i >= 1; --i) {
        for (int j = 1; j <= a - i; ++j) {
            std::cout << " ";
        }
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}