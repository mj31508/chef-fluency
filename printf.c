#include <stdarg.h>
#include "holberton.h"

int _printf(const char *format, ...)
{

	va_list print_stuff;
	char_funcs_t = conversions[] = {
		{"c", print_c},
		{"s", print_s}
	};

	int i;
	int j;
	int chars;
	i = 0;
	chars = 0;

	va_start(print_stuff, format);
	while (format[i] != '\0' && format != NULL)
	{
		if (format[i] == '%')
		{
			i++;

			j = 0;

			while ( j < 4)
			{
				j++;

				if (format[i] == *conversion[j].c)
				{
					chars += conversions[j].f(print_stuff);
				}
			}
		}
		else
		{
			_putchar(format[i]);
			chars++;
		}
		i++;
	}
	va_end(print_stuff);
	return (chars);
}


