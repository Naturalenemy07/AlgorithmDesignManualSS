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
            std::cout << dummy_i << " is less than 10!\n";
        }
        // for numbers 10 and greater, state even or odd
        else {
            std::cout << dummy_i << " is greater than 9!\n";
        }
    }

    return 0;
}
