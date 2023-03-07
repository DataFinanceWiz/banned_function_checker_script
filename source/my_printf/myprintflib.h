/*
** EPITECH PROJECT, 2022
** my_printflib
** File description:
** my_printflib
*/
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#ifndef MYPRINTFLIB_H
    #define MYPRINTFLIB_H
int my_putstr(char const *str);
int my_putnbr(int nb);
void my_putchar(char c);
int my_strlen(char const *str);
char *my_strcpy(char *dest, char const *src);
void print_o(int nb);
void print_b(int nb);
void print_p(int nb);
void print_hexa(int nb);
void print_x(int nb);
double pfloat(double nb);
unsigned int my_putnbu(unsigned int nb);
int my_printf(const char *format, ...);
int my_strcmp(char const *string1, char const *string2);
int my_getnbr(char *str);
#endif
