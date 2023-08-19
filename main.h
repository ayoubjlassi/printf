#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include<stdarg.h>
#include<unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* SIZES */
#define S_LONG 2
#define S_SHORT 1

/**
 * struct fmt - Struct op
 * @fmt: format
 * @fn: the fucntion
 */

struct fmt
{
	char fmt;

	int (*fn)(va_list, char[], int, int, int, int);

};


/**
 * typedef struct fmt fmt_t - struct op
 * @fmt: the format
 * @fm_t: the function
 */

typedef struct fmt fmt_t;

int _printf(const char *format, ...);
/* Funtions to hundle */
int get_flags(const char *format, int *j);
int get_width(const char *format, int *j, va_list list);
int get_precision(const char *format, int *j, va_list list);
int get_size(const char *format, int *j);


int handle_print(const char *fmt, int *i);
/*function to print string in reverse */

#endif
