/*
** EPITECH PROJECT, 2022
** mini_printf
** File description:
** mini_printf
*/

#include"myprintflib.h"

int my_putnbr(int nb)
{
    if (nb < 0) {
        my_putchar(45);
        my_putnbr(nb = nb *(-1));
    } else if (nb >= 0 && nb <= 9) {
        my_putchar(nb + 48);
    } else {
        my_putnbr(nb / 10);
        if (nb % 10 >= 0 && nb % 10 <= 9) {
            my_putchar(nb % 10 + 48);
        } else {
            my_putnbr(nb % 10);
        }
    }
    return 0;
}
