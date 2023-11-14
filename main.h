#ifndef MAIN
#define MAIN
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
int _printf(const char *format, ...);
int formatC_handle(va_list args);
int formatS_handle(va_list args);
int formatD_handle(va_list args);
int formatB_handle(va_list args);
int test_format(const char *str, va_list args);
int print_int(int c);
int _putchar(char c);


#endif
