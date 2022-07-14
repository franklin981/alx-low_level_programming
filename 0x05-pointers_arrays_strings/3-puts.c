#include "main.h"
/**
 * _puts -> using of puts function
 * @str - string to be printed
 */

void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
