#include "main.h"
/**
 * print_alphabet -> in a single line
 */
void print_alphabet_x10(void)
{
int i;
int j;
for (i = 'a'; i <= 'z'; i++)
{
for (j = 'a'; j <= 'z'; j++)
_putchar(j);
}
_putchar('\n');
}
