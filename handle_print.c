#include "main.h"
/**
 * handle_print - print
 * @f : string
 * @list : list
 * @ind : ind
 * @buffer : input value
 * @flags : flags
 * @width : width
 * @precision : precision
 * @size : size
 * Return: 1 or 2
 */
int handle_print(const char *f, int *ind, va_list list,
char buffer[], int flags, int width, int precision, int size)
{
	int i, unknow_len = 0, printed_chars = -1;
	f_t f_types[] = {{'c', print_char}, {'s', print_string},
{'%', print_percent}, {'c', print_char}, {'i', print_int}, {'d', print_int},
{'b', print_binary}, {'u', print_unsigned},
{'o', print_octal}, {'x', print_hexadecimal}, {'X', print_hexa_upper},
{'p', print_pointer}, {'S', print_non_printable},
{'r', print_reverse}, {'R', print_rot13string}, {'\0', NULL}
};

	for (i = 0; f_types[i].f != '\0'; i++)
		if (f[*ind] == f_types[i].f)
		{
			return (f_types[i].fn(list, buffer, flags, width, precision, size));

			if (f_types[i].f == '\0')
			{
				if (f[*ind] == '\0')
					return (-1);
				unkown_len += write(1, "%%", 1);
				if (f[*ind - 1] == ' ')
					unkown_len += write(1, " ", 1);
				else if (width)
				{
					while
					(f[*ind] != ' ' && f[*ind] !=  '%')
		if
		(f[*ind] == ' ')
							return (1);

				}
				unkown_len += write(1, &f[*ind], 1);
				return (unkown_len);
			}
			return (printed_chars);
		}



