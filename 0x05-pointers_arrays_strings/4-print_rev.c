#include "main.h"
#include "string.h"
/**
 *print_rev -> printing a string in reverse
 * @s: string need to be printed reverse
 */
void print_rev(char *s)
{
int n;
int i;
n = strlen(s);
while (s[n] != '\0')
{
n++;
}
for (i = n - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
