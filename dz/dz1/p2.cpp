#include <iostream>

int main() {
	int a;
	std::cin >> a;
	for (int i = 1; i < a + 1; ++i) {
        for (int j = 1; j <= a - i; ++j) {
            std::cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
	}
}