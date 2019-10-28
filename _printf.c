#include "holberton.h"

/**
 * _printf - prints anything
 * @format: the string to print
 * Return: an integer
 */
int _printf(char *format, ...)
{
	unsigned int i = 0, count = 0;
	int *p_i;
	va_list arg;

	va_start(arg, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
			case 's':
				count += s_print(va_arg(arg, char *));
				i++;
				break;
			case '%':
				count += p_print();
				i++;
				break;
			default:
				p_i = &i;
				_printf_ext_1(arg, format[i], p_i);
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

int _printf_ext_1(va_list val, char ch, char *p_i)
{
	int count = 0;

	switch (ch)
	{
		case 'c':
			count += c_print(va_arg(val, int));
			*p_i++;
			break;
	}

	return (count);
}
