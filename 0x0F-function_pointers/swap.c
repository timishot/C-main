#include <stdio.h>

void swap(int *a, int *b) {
    asm (
        "xchg %0, %1"
        : "+r" (*a), "+r" (*b)
    );
}

int main() {
    int x = 5, y = 10;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);
    return 0;
}

