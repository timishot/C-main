#include <stdio.h>

void primeFactor(size_t factor)
{
	size_t i = 2;

	while(factor > 1){
		if (factor % i == 0){
			factor = factor/i;
			printf("%ld\n", i);
		} else {
			i++;
		}
	}
}

int main() {
    size_t number;
    printf("Enter a number: ");
    scanf("%ld", &number);

    printf("Prime factors:\n");
    primeFactor(number);

    return 0;
}