#include <stdio.h>

int main() {
    char word1[] = "Hello World";
    char word2[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};

    char *words[] = {
        "Hello ",
        "this ",
        "is ",
        "a ",
        "message ",
        "in ",
        "pointer ",
        "array"
    };

    printf("%s\n%s\n", word1, word2);

    for (int i = 0; i<8; i++) {
        printf("%s", words[i]);
    }
    printf("\n");

    return 0;
}