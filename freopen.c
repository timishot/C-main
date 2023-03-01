#include <stdio.h>

int main(void)
{
	FILE *input_file = fopen("input.txt", "r");
	if (input_file == NULL)
	{
		printf("Error opening input file\n");
		return 1;
	}

	FILE *output_file = fopen("output.txt", "w");
	if (output_file == NULL)
	{
		printf("Error openingoutput file\n");
		return 1;
	}


	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int x, y;
	scanf("%d %d", &x, &y);
	printf("sum: %d\n", x + y);


	freopen("/dev/tty", "r", stdin);
	freopen("/dev/tty", "w", stdout);

	fclose(input_file);
	fclose(output_file);

	return 0;
}
