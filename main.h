#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <limits.h>

int print_char(va_list args);
int print_string(va_list args);
int print_percent(void);
int _printf(const char *format, ...);


#endif /* MAIN_H */
