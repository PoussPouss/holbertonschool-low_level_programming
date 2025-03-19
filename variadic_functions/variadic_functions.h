#ifndef MYHEADER_H
#define MYHEADER_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct print_func - structure for printing functions
 * @type: The format type
 * @print_func: The function to print
 */
typedef struct print_func
{
	char type;

	void (*print_func)(va_list);
} print_func_t;

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

#endif
