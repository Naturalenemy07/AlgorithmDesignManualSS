#include <stdio.h>

void update(int *a,int *b) {
    // make temporary value to get whats in memory before it is changed
    int temp_a = *a;
    
    // change the value stored in memory address of a
    *a += *b;
    
    //b returns absolute value
    if(temp_a - *b < 0) {
        *b = -1 * (temp_a - *b);
    }
    else {
        *b = temp_a - *b;
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
