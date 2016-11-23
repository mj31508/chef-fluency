#ifndef PRINTF_H
#define PRINTF_H
#include <stdlib.h>
#include <unistd.h>
/**
 * struct char_functs - Struct to find function based on char
 * @c: char to check as key
 * @f: pointer to function to call
 *
 *
 *
 */

typedef struct char_functs
{
	char *c;
	int (*f)();
} chars_funcs_t;




int _putchar(char c);
int print_c(void);
int print_s(void);
int _printf(const char *format, ...);

#endif
