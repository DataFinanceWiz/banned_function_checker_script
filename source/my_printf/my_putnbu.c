/*
** EPITECH PROJECT, 2022
** unsigned int
** File description:
** unsigned int
*/

#include"myprintflib.h"

unsigned int my_putnbu(unsigned int nb)
{

    if (nb >= 0 && nb <= 9) {
        my_putchar(nb + 48);
    } else {
        my_putnbu(nb / 10);
        if (nb % 10 >= 0 && nb % 10 <= 9) {
            my_putchar(nb % 10 + 48);
        } else {
            my_putnbu(nb % 10);
        }
    }
    return 0;
}
