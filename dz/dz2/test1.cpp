#include <iostream>

int main() {
    for (unsigned char i = 0; i <= 256; ++i) {
        std::cout << static_cast<int>(i) << std::endl;
        if (i == 255) {
            std::cout << "256";
            break;
        }
    }
    return 0;
}