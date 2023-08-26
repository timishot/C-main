#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int i;
    if (argc != 2) {
        printf("Error\n");
        return 1;
    }

    int numBytes = atoi(argv[1]);

    if (numBytes < 0) {
        printf("Error\n");
        return 2;
    }

    char *mainPtr = (char *)main;
    for (i = 0; i < numBytes; i++) {
        printf("%02x ", (unsigned char)mainPtr[i]);
    }
    printf("\n");

    return 0;
}