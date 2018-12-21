#include <stdio.h>

int main() {
    int one_dimensional_array[5] = {5, 2, 56, 4, 1};
    int two_dimensional_array[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };


    /* Here is code to access items from an array directly */
    for (int i = 0; i<5; i++) {
        printf("%d, ", one_dimensional_array[i]);
    }

    printf("\n\n");

    for (int i = 0; i<3; i++) {
        for (int j = 0; j<3; j++) {
            printf("%d, ", two_dimensional_array[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    /* Here is code to access items from an array using pointers */
    int *p = one_dimensional_array;
    for (int i = 0; i<5; i++) {
        printf("%d, ", *(p+i));
    }
    printf("\n\n");

    p = &two_dimensional_array[0][0];
    for (int i = 0; i<3; i++) {
        for (int j = 0; j<3; j++) {
            printf("%d, ", *(p+i*3+j));
        }
        printf("\n");
    }
    return 0;
}