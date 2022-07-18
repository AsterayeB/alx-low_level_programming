#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j;
	int temp;

	j = n - 1;
for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[j];
a[j--] = temp;
}
}
