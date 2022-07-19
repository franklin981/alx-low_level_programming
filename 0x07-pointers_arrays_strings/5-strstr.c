#include "main.h"
#include <string.h>

/**
 * _strstr - locate a character in a string
 * @s: pointer to the strings to be searched
 * @c: pointer to character being searched for
 *
 * Return: pointer to the first position of the c.
 */

char *_strstr(char *s, char *c)
{
	return (strstr(s, c));
}
