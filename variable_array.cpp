#include <iostream>
#include <vector>

int main() {
    //get input for number of arrays and queries
    int num_arr, num_que, temp_vect_len, element, temp_index_num, temp_element_num;
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
    
    //initialize index array and element array
    int index_array[num_que], element_array[num_que];    
    
    //input indexes into index_array[]
    for(int i = 0; i < num_que; i++) {
        std::cin >> temp_index_num;
        index_array[i] = temp_index_num;        
    }
    
    //input element queries into element array[]
    for(int i = 0; i < num_que; i++) {
        std::cin >> temp_element_num;
        element_array[i] = temp_element_num;
    }
    
    //print out specific elements
    for(int i = 0; i < num_que; i++) {
        std::cout << vector_space[index_array[i]][element_array[i]] << std::endl;
    }
        
    return 0;
}
