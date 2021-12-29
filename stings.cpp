#include <iostream>
#include <string>

int main() {
    //input from user
    std::string a, b, c;
    std::cin >> a >> b; 
    
    //output length of each string
    int len_a = a.size();
    int len_b = b.size();
    std::cout << len_a << " " << len_b << std::endl;
    
    //output concatenation of strings
    std::cout << a << b << std::endl;
    
    //swap first characters and print
    char temp_char_a = a[0];
    a[0] = b[0];
    b[0] = temp_char_a;
    std::cout << a << " " << b << std::endl;
    
    return 0;
}
