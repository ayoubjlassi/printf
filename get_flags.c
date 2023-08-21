#include "main.h"
<<<<<<< HEAD

/**
 * get_flags - Calculates active flags
 * @format: Formatted string in which to print the arguments
 * @i: take a parameter.
 * Return: Flags:
=======
/**
 * get_flags - calculates active flags
 * @format : input value
 * @i : input value
 * Return : flags
>>>>>>> 53f885d6287b058efc864617af4846bad0bba700
 */
int get_flags(const char *format, int *i)
{
	/* - + 0 # ' ' */
<<<<<<< HEAD
	/* 1 2 4 8  16 */
	int j, curr_i;
	int flags = 0;
	const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};
	for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)
	{
		for (j = 0; FLAGS_CH[j] != '\0'; j++)
			if (format[curr_i] == FLAGS_CH[j])
			{
				flags |= FLAGS_ARR[j];
				break;
			}
		if (FLAGS_CH[j] == 0)
			break;
	}
	*i = curr_i - 1;
	return (flags);
=======
	/* 1 2 4 8 16 */
	int i, curr_i;
	int flags = 0;
	const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0}

	for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)
	{
		for (j = 0; FLAGS_CH[j] != '\0'; j++)
	if (format[curr_i] == FLAGS_CH[j])
	{
		flags != FLAGS_ARR[j];
		break;
	}
		*i = curr_i - 1;
		return (flags);
	}
>>>>>>> 53f885d6287b058efc864617af4846bad0bba700
}
