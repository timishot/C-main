#include "main.h"

/**
 * binary_to_unit - convert a binary number to and unsigned int.
 * @b: Pointer ro a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if there are invalid charaacters or b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int i;

	if (b == NULL)
		return  (0);

	for (i=0; b[i] != '\0'; i++)
	{
		if(b[i] == '0')
			result = result << 1;
		else if (b[i] == '1')
			result = (result << 1) | 1;
		else
			return (0);

	}

	return (result);
}

