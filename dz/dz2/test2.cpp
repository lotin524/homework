#include <iostream>

int main() {
    int dec = 524;
    if (dec == 0) {
        std::cout << "binary - " << std::endl;
        return 0;
    }

    int a = 1;
    int bin = 0;

    while (dec > 0) {
        int quotient = dec % 2;
        dec = dec / 2;
        bin += quotient * a;
        a *= 10;
    }

    std::cout << "binary - " << bin << std::endl;

    return 0;
}