#include <stdlib.h>
#include <stdio.h>
/**
 * main - this is where the main starts
 *
 * Return: the value should be zero
*/
int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;
printf("Size of a char: %lu  byte(S)\n", (unsigned long)sizeof(d));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf"Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
