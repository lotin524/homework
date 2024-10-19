// 555.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main() {
    int a;
    std::cin >> a;
    for (int i = 1; i <= a; ++i) {
        for (int j = 1; j <= a - i; ++j) {
            std::cout << " ";
        }
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
            if (j < i) {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    for (int i = a - 1; i >= 1; --i) {
        for (int j = 1; j <= a - i; ++j) {
            std::cout << " ";
        }
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
            if (j < i) {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}