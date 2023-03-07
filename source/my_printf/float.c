/*
** EPITECH PROJECT, 2022
** printfloat
** File description:
** printfloat
*/

#include <unistd.h>
#include "myprintflib.h"

double pfloat(double nb)
{
    double floater;
    int integer = nb;
    my_putnbr(integer);
    my_putchar('.');
    floater = nb - integer;
    (floater < 0.1) ? my_putchar('0') : 0;
    (floater < 0.01) ? my_putchar('0') : 0;
    (floater < 0.001) ? my_putchar('0') : 0;
    (floater < 0.0001) ? my_putchar('0') : 0;
    (floater < 0.00001) ? my_putchar('0') : 0;
    (floater < 0.000001) ? my_putchar('0') : 0;
    floater = floater * 1000000;
    my_putnbr(floater);
}
