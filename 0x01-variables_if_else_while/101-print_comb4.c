#include <stdio.h>
/**
 *main - prints combinations of three digits
 * Return: success value
 **/
int main(void)
{
int i, x, y;

for (i = 48; i <= 57; i++)
{
for (x = 48; x <= 57; x++)
{
for (y = 48; y <= 57; y++)
if (i != x && i < x && i != y && y != x && i < y && x < y)
{
putchar (i);
putchar (x);
putchar (y);
if (i != 55 || x != 56 || y != 57)
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
