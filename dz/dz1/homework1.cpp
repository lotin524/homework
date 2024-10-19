#include <iostream>
#include <string>

int main()
{
    int a;
    char b = '*';
    std::cin >> a;
    
    for (int i = 1; i < a + 1; ++i){
        for (int j = 1; j < a; ++j) {
            std::cout << std::string(i, b);
        }
        std::cout << std::endl;
    }


}
