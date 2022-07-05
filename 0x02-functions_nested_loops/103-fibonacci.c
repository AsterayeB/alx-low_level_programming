#include <stdio.h>
/**
 * main - prints the sum of even numbers followed by a new line
 * Return: 0 success value
 */

int main(void)
{
	int i;
	unsigned long int a, b, result, sum;

	a = 1;
	b = 2;
	result = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (a < 4000000 && (a % 2) == 0)
			{
			sum = sum + a;
			}

		result = a + b;
		a = b;
		b = result;
		}
	printf("%lu\n", sum);
		return (0);
		}
