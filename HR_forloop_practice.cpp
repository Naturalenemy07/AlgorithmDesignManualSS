#include <iostream>

int main() {
    
    // recieve input values a and b
    int a, b;
    std::cin >> a >> b;
    
    // initialize variable is a
    // termination variable is b (include b)
    for(int dummy_i = a; dummy_i <= b; dummy_i++) {
        // for numbers less than 10, print word form
        if(dummy_i < 10) {
            if(dummy_i == 9) {std::cout << "nine\n";}
            else if(dummy_i == 8) {std::cout << "eight\n";}
            else if(dummy_i == 7) {std::cout << "seven\n";}
            else if(dummy_i == 6) {std::cout << "six\n";}
            else if(dummy_i == 5) {std::cout << "five\n";}
            else if(dummy_i == 4) {std::cout << "four\n";}
            else if(dummy_i == 3) {std::cout << "three\n";}
            else if(dummy_i == 2) {std::cout << "two\n";}
            else {std::cout << "one\n";}        
        }
        // for numbers 10 and greater, state even or odd
        else {
            if(dummy_i % 2 == 1) {std::cout << "odd\n";}
            else {std::cout << "even\n";}
        }
    }

    return 0;
}
