#include <stdio.h>

void print_line(FILE *);

int main() {

    FILE *fp;
    fp = fopen("test.txt", "a+");
    printf("Before writing file is:\n");
    print_line(fp);
    print_line(fp);
    print_line(fp);
    
    printf("\nWriting to file.");
    fputs("\nThis line was written by file_io.c", fp);
    fclose(fp);

    fp = fopen("test.txt", "r");
    printf("\nAfter writing file is:\n");
    print_line(fp);
    print_line(fp);
    print_line(fp);
    print_line(fp);

    fclose(fp);
    return 0;
}

void print_line(FILE * fp) {
    char buff[64];
    fgets(buff, 64, fp);
    printf("%s", buff);
}