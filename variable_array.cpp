#include <iostream>
#include <vector>

int main() {
    //get input for number of arrays and queries
    int num_arr, num_que, temp_vect_len, element;
    std::cin >> num_arr >> num_que;
    
    //required number of vectors as a vector of vectors
    std::vector<std::vector<int>> vector_space;
    
    //build vectors
    for(int i = 0; i < num_arr; i++) {
        std::vector<int> vect;
        std::cin >> temp_vect_len;
        for(int j = 0; j < temp_vect_len; j++) {
            std::cin >> element;
            vect.push_back(element);            
        }
        vector_space.push_back(vect);
    }
    
    std::cout << vector_space[1][3];
    
    return 0;
}
