#include <stdio.h>

/**
 * main - entry point
 * print alphalbet a to z in  loweercase
 * return: 0
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);//print alphabet one at a time
	}
	putchar('\n');
	return (0);
}
