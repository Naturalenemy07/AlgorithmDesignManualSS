#include <iostream>
#include <cstdio>

int main() {
    // set variables
    int integer;
    long long_int;
    char sstring;
    float decimal_value;
    double long_float;
    
    //scan input in predefined, known order order
    scanf("%d %ld %c %f %lf", &integer, &long_int, &sstring, &decimal_value, &long_float);
    printf("%d\n%ld\n%c\n%.3f\n%.9lf\n",integer, long_int, sstring, decimal_value, long_float);
    return 0;
}
