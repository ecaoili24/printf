#include "holberton.h"

/**
 * _printf - prints anything
 * @format: the string to print
 * Return: an integer
 */
int _printf(char *format, ...)
{
	unsigned int i = 0, count = 0;
	va_list arg;

	va_start(arg, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
			case 'c':
				count += c_print(va_arg(arg, int));
				i++;
				break;
			case 's':
				count += s_print(va_arg(arg, char *));
				i++;
				break;
			case '%':
				count += p_print();
				i++;
				break;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(arg);
	return (count);
}
