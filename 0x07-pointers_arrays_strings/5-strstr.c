#include "main.h"
<<<<<<< HEAD
/**
 * _strstr - function locate
 * @haystack: pointer to char
 * @needle: pointer to char
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
char *result = haystack, *fneedle = needle;
while (*haystack)
{      
while (*needle)
{
if (*haystack++ != *needle++)
{
break;
}
}
if (!*needle)
{
return (result);
}
needle = fneedle;
result++;
haystack = result;
}
return (0);
=======
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
>>>>>>> 55e80d1fd21ff009fa2387dad41210e5e5a62e21
}
