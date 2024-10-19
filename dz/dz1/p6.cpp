

#include <iostream>

int main() {
    int a;
    std::cout << "Введите высоту половины ромба: ";
    std::cin >> a;

    for (int i = 1; i <= a; ++i) {
        for (int j = 1; j <= a - i; ++j) {
            std::cout << " ";
        }
        std::cout << "*";
        if (i > 1) {
            for (int j = 1; j < 2 * (i - 1); ++j) {
                std::cout << " ";
            }
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    for (int i = a - 1; i >= 1; --i) {
        for (int j = 1; j <= a - i; ++j) {
            std::cout << " ";
        }
        std::cout << "*";
        if (i > 1) {
            for (int j = 1; j < 2 * (i - 1); ++j) {
                std::cout << " ";
            }
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}