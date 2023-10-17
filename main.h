#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
#include <stdlib.h>

int print_char(va_list args);
int print_string(va_list args);
int print_percent(void);
int _printf(const char *format, ...);
int _putchar(char c);
char *convert(int b, char *buffer);
unsigned int print_int(va_list args);

#endif /* MAIN_H */
