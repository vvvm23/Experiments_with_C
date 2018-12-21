#include <stdio.h>

int main() {
    int a = 10;
    int b;
    /*This if statement */
    if (a<10) {
        b = 0;
    }
    else {
        b = 1;
    }
    printf("%d\n", b);

    /* Is equivalent to: */

    b = a<10 ? 0 : 1;
    printf("%d\n", b);

    return 0;
}