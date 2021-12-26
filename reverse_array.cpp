#include <iostream>

int main() {
    // get size of array
    int n;
    std::cin >> n;
    
    //build array
    int arr[n];
    for(int dummy_i = 0; dummy_i < n; dummy_i++) {
        std::cin >> arr[dummy_i];
    }
    
    
    //output array in reverse order
    for(int dummy_o = n - 1; dummy_o >=0; dummy_o--) {
        std::cout << arr[dummy_o] << " ";
    }

    return 0;
}
