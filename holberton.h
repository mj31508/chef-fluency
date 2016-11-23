#ifndef HOLBERTON
#define HOLBERTON
#include <stdlib.h>
#include <unistd.h>
/**
 * struct char_funcs - Struct to find function based on char
 * @c: char to check as key
 * @f: Pointer to function to call
 */
typedef struct char_funcs
{
	char *c;
	int (*f)();
} char_funcs_t;
int _printf(const char *format, ...);
int _putchar(char c);
int print_c();
int print_s();
#endif
