#include <stdio.h>

void nl();

int main() {
    int i = 0;

    /* This is a while loop */
    while(i<10) {
        printf("%d\n", i);
        i++;
    }
    nl();

    /* This is a for loop */
    for (i=0; i<10; i++) {
        printf("%d\n", i);
    }
    nl();
    
    i = 0;
    /* This is a do while loop */
    do {
        printf("%d\n", i);
        i++;
    } while (i < 10);

    return 0;
}

void nl(void) {
    printf("\n");
}