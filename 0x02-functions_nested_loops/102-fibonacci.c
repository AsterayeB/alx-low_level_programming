#include <stdio.h>
/**
 * main - prints the first 50 fibonacci series
 * Return: 0 success
 */
int main(void)
{
	long int a, b, i, result;

	a = 1;
	b = 2;

	for (i = 1; i <= 50; i++)
	{
		if (a != 20365011074)
		{
			printf("%ld, ", a);
		}
		else
		{
		printf("%ld\n", a);
		}
		result = a + b;
		a = b;
		b = result;
	}

	return (0);
}
