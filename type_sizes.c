#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("Storage capacity of char is: %ld \n", sizeof(char));
    printf("Storage capacity of int is: %ld \n", sizeof(int));
    printf("Storage capacity of short is: %ld \n", sizeof(short));
    printf("Storage capacity of long is: %ld \n", sizeof(long));
    printf("Storage capacity of float is: %ld \n", sizeof(float));
    printf("Storage capacity of double is: %ld \n", sizeof(double));
    printf("Storage capacity of long double is: %ld \n", sizeof(long double));
    
    return 0;
}