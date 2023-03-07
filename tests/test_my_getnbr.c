/*
** EPITECH PROJECT, 2023
** my punbr test
** File description:
** my putnbr
*/

#include "../source/my_printf/myprintflib.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_getnbr, getnbr) {
    char *string = "14Bonjour";
    int nbr = my_getnbr(string);
    cr_assert(nbr == 14,
    "Expected 'Hello\n', but got '%s'", nbr);
}
