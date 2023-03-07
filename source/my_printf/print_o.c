/*
** EPITECH PROJECT, 2022
** print oct
** File description:
** print oct
*/

#include"myprintflib.h"

void print_o(int nb)
{
    int i = 0; int display = 0;
    int tconvert[50];
    while (nb != 0) {
        tconvert[i] = nb % 8;
        nb = nb / 8;
        i++;
    }
    for (display = i - 1; display >= 0; display--) {
        my_putnbr(tconvert[display]);
    }
}
