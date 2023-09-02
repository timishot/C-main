#include <stdio.h>

char *rot13(char *s)
{

	while (*s != '\0')
	{
		if ((*s >= 'A' && *s <= 'M') || (*s >= 'a' && *s <= 'm'))
			*s += 13;
		else if ((*s >= 'M' && *s <= 'Z') || (*s >= 'n' && *s <= 'z'))
			*s -= 13;
		s++;
	}
	return s;
}
		
			
			

