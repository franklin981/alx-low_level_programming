#include "main.h"
/**
 * rev_string -  reversing a string
 * @s - is a string paramerter
 */
void rev_string(char *s)
{
int i, length1, length2;
length1 = 0;
length2 = 0;
while (s[length1] != '\0')
{
length1++;
}
length2 = length1 - 1;
for (i = 0; i < length1 / 2; i++)
{
char tmp = s[i];
s[i] = s[length2];
length2 -= 1;
}
}
