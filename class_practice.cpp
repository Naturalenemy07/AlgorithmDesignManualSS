#include <iostream>
#include <sstream>

class Student {
    private:
        int age;
        std::string first_name;
        std::string last_name;
        int standard;
    public:
        void set_age(int public_age) {
            age = public_age;
        }
        void set_standard(int public_standard) {
            standard = public_standard;
        }
        void set_first_name(std::string public_first_name) {
            first_name = public_first_name;
        }
        void set_last_name(std::string public_last_name) {
            last_name = public_last_name;
        }
        
        int get_age() {
            return age;
        }
        int get_standard() {
            return standard;
        }
        std::string get_first_name() {
            return first_name;
        }
        std::string get_last_name() {
            return last_name;
        }
        std::string to_string() {
            std::string return_statement = std::to_string(age) + "," + first_name + "," + last_name + "," + std::to_string(standard);
            return return_statement;
        }
};

int main() {
    int age, standard;
    std::string first_name, last_name;
    
    std::cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    std::cout << st.get_age() << "\n";
    std::cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    std::cout << st.get_standard() << "\n";
    std::cout << "\n";
    std::cout << st.to_string();
    
    return 0;
}
