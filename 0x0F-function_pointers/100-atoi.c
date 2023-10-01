#include <stdio.h>
#include <limits.h>

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s == ' ') /**skiping whitespace**/
		s++;

	/**dealing with minus sign**/
	while (*s == '+' || *s == '-')
	{
		if (*s == '-')
			sign *= -1;
		s++;
	}

	/**convert string to integer**/
	while (*s >= '0' && *s <= '9'){
		/**handle overflow**/
		if (result > INT_MAX/10 || (result == INT_MAX / 10 && *s - '0' > INT_MAX % 10)){
			if (sign == 1)
				return INT_MAX;
			else 
				return INT_MAX;
		}
		result = result * 10 + (*s - '0');
		s++;
	}

	return (result * sign);
}

