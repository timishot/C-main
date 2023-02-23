#include <stdio.h>

int main(void) {
    FILE *fp;
    fp = fopen("newfile.txt", "w");
    if (fp == NULL) {
        printf("Error creating file\n");
        return 1;
    }
    fprintf(fp, "Hello, world!\n");
    fclose(fp);
    return 0;
}
