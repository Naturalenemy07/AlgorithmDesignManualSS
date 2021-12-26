#include <iostream>
#include <vector>
#include <string>

int main() {
    //get input for number of arrays
    int num_arr;
    int num_que;
    
    std::cin >> num_arr;
    std::cin >> num_que;
    
    //build labels for vectors, store in array
    std::string arr[num_arr];
    for(int dummy_c = 0; dummy_c < num_arr; dummy_c++) {
        std::string label = "array_" + std::to_string(dummy_c + 1);
        arr[dummy_c] = label;
        
        int arr_len;
        std::cin >> arr_len;
        std::vector<int> arr[dummy_c];
        for(int dummy_e = 0; dummy_e < arr_len; dummy_e++) {
            int temp_int;
            std::cin >> temp_int;
            arr[dummy_c].push_back (temp_int);
        }
    }
    
    for(int dummy_a = 0; dummy_a < num_arr; dummy_a++) {
        for(std::vector<int>::iterator it = arr[dummy_a].begin() ; it != arr[dummy_a].end(); ++it) {
            std::cout << *it;
        }
    }
    
    return 0;
    
}
