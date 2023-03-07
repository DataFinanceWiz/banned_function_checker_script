/*
** EPITECH PROJECT, 2022
** my_printf_exp.c
** File description:
** Omega
*/

#include"myprintflib.h"

void print_b(int nb)
{
    int i = 0; int display = 0;
    int tconvert[50];
    while (nb != 0) {
        tconvert[i] = nb % 2;
        nb = nb / 2;
        i++;
    }
    for (display = i - 1; display >= 0; display--) {
        my_putnbr(tconvert[display]);
    }
}
