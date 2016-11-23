#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>

<<<<<<< HEAD
int print_c (va_list args)
{
	_putchar(va_arg(args, int));
	return(1);
}

=======
/**
 * print_c - prints a char
 * @args: va_list of all given arguments to _printf
 * Return: Returns 1
 */

int print_c(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * print_s - prints a string
 * @args: va_list of all given arguments to _printf
 * Return: Returns chars
 */

int print_s(va_list args)
{
	char *str;
	int i, chars;

	i = 0;
	chars = 0;
	str = va_arg(args, char *);
	if (str == NULL)
		str = "(nil)";
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		chars++;
	}
	return (chars);
}
>>>>>>> master
