#ifndef PRINTF_H
#define PRINTF_H
#include <stdlib.h>
#include <unistd.h>
/**
 * typedef buffer - A buffer for our printf
 * @c: Buffer to write characters
 * @f: The string passed to our printf
 *
 *
 *
 */

typedef struct char_functs {
	char *c;
	int (*f)();
} chars_funcs_t;




void _copy(buffer *);

int _printf(const char *format, ...);

#endif
