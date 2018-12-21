#include <stdio.h>

int main() {

    /* Get one character from stdin */
    /*char c;
    printf("Enter a character : ");
    c = fgetchar();

    printf("\nYou entered: ");
    fputchar(c);*/

    /* Reads entire line from stdin */
    char str[64];
    printf("Enter things : ");
    fgets(str, 64, stdin);

    printf("\nYou entered: ");
    fputs(str, stdout);

    return 0;
}