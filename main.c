#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * _printf - Build out the printf function
 * @format: string passed with possible format specifiers
 * Return: number of characters printed
 */

int _printf(const char *format, ...) 
{
	va_list args;
	char *buf = NULL;
	size_t bufsize = 0;
	int chars_written = 0;

	if (!format)
		return (-1);

	va_start(args, format);
	chars_written = vasprintf(&buf, format, args);
	va_end(args);

	if (chars_written < 0 || !buf)
	{
		free(buf);
		return (-1);
	}

	write(1, buf, chars_written);
	free(buf);

	return (chars_written);
}
