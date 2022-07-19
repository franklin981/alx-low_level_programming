#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
char *_strstr(char *s, char *c);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
int _putchar(char c);
void set_string(char **s, char *to);

#endif
