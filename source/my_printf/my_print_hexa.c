/*
** EPITECH PROJECT, 2022
** testpointer
** File description:
** testpointer
*/
#include"myprintflib.h"

void print_hexa(int nb)
{
    int i = 0; int rest = 0;
    char* tconvert = malloc(sizeof(char) * 50);
    while (nb != 0) {
        rest = nb % 16;
        if (rest < 10) {
            tconvert[i] = rest + 48;
            i++;
        } else {
            tconvert[i] = rest + 55;
            i++;
        }
        nb = nb / 16;
    }
    for (int display = i - 1 ; display >= 0; display--) {
        my_putchar(tconvert[display]);
    }
}
