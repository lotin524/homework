#include <iostream>

int main(){
	int a;
	std::cin >> a;
	for (int i = 1; i < a+1; ++i) {
	    if (a > 25){
		    break;
	    }
		for (int j = 1; j <= i; ++j) {
            	std::cout << "*";
        }
        std::cout << std::endl;;
	}
}