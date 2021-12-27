#include <iostream>
#include <vector>

int main() {
    //get input for number of arrays and queries
    int num_arr, num_que, temp_vect_len, element, ans_index, ans_element;
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
    
    //print out answers
    for(int i = 0; i < num_que; i++) {
        std::cin >> ans_index >> ans_element;
        std::cout << vector_space[ans_index][ans_element] << std::endl;
    }
    
    return 0;
}
