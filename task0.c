#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
	va_list list;
	int total = 0;

	va_start(list, format);
	while (total < va_arg)
	{
		total++


		format += va_arg(list, int)
			}
va_end
}

main()
{
	printf("")
}
