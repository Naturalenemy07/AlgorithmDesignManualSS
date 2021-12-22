#include <iostream>
#include <list>

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d) {
    int max_num = 0;
    std::list<int> nums = {a, b, c, d};
    std::list<int>::iterator it;
    
    for(it = nums.begin(); it != nums.end(); it++) {
        //std::cout << *it << std::endl;
        if(*it > max_num) {
            max_num = *it;
        }
    }
    
    return max_num;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
