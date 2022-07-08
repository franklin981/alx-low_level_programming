#include "main.h"
/**
 * print_most_numbers -> this print out most numbes
 */
void print_most_numbers(void)
{
int x;
for (x = 0; x < 10; x++)
{
if (x != 4 && x != 2)
{
_putchar(x + '0');
}
}
_putchar('\n');
}
