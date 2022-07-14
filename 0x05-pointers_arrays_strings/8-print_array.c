#include "main.h"
#include "string.h"
#include <stdio>
/**
 * print_array - function to print an array
 * @a: parameter a
 * @n: parameter n
 */

void print_array(int *a, int n)
{
int array[n];
int i;
for (i = 0; i < n; i++)
{
printf("array[%d] = %d;/n", a[i], i);
}
}
