#include <stdio.h>
/**
 * main - print alphabets in both lower and uppercases
 * Return: success
 */
int main(void)
{ int a;
int ch;
for (a = 97; a < 123; a++)
{
	putchar(a);
	}
	for (ch = 65; ch < 91; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
