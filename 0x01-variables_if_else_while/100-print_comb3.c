#include <stdio.h>
/**
 *main - prints combination of numbers 0 to 99
 * Return: 0 success value
 */
int main(void)
{
int x, y;

for (x = 48; x <= 56; x++)
{
	for (y = 49; y <= 57 ; y++)
	{
	if (x != y && x < y)
	{
	putchar(x);
	putchar(y);
if (x != 56 && x != 57)
{
putchar (',');
putchar (' ');
}
}
}
}
putchar('\n');
return (0);
}
