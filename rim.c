#include <stdio.h>

int main() {
    FILE *fp;
    char c;

    fp = fopen("example.txt", "r");  // Open the file in read-only mode

    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    while ((c = getc(fp)) != EOF) {  // Read characters from the file until the end
        putchar(c);                 // Write the characters to the standard output
    }

    fclose(fp);  // Close the file
    return 0;
}
