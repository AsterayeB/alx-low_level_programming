#include "main.h"
/**
 * string_toupper - chnage all lowercase to uppercase
 * @n: pointer
 * Retrn: n
 */

char *string_toupper(char *n)
{
	int i;
	i = 0;
	whille (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
