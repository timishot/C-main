#include "main.h"
#include <stdio.h>

int _atoi(char *str) {
    int result = 0;
    int sign = 1;
    int i = 0;

    if (str[0] == '-') {
        sign = -1;
        i++;
    }

    while (str[i] != '\0') {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return sign * result;
}

char *infinite_add(char *n1, char *n2, char *r, int size_r) {
    int result;
    int firstNumber = _atoi(n1);
    int secondNumber = _atoi(n2);

    result = firstNumber + secondNumber;

    if (snprintf(r, size_r, "%d", result) >= size_r) {
        return NULL;
    }

    return r;
}

int main() {
    char n1[] = "1234";
    char n2[] = "12345";
    char result[20];

    char *res = infinite_add(n1, n2, result, sizeof(result));

    if (res == NULL) {
        printf("Error: Result too large for buffer\n");
    } else {
        printf("Result: %s\n", res);
    }

    return 0;
}
