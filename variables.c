#include <stdio.h>
#include <float.h>

#define HALF 0.5

int main() {
    int a;
    float b;

    a=2;
    b=3;

    float c = a/b;
    printf("c is equal to %f \n", c);

    c = c * HALF;
    printf("Half of c is equal to %f \n", c);

    return 0;
}
