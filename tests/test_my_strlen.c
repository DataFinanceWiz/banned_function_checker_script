/*
** EPITECH PROJECT, 2023
** my_putchar test
** File description:
** my_putchar test
*/

#include "../source/my_printf/myprintflib.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

const char *str = "Hello world 14";
const int len = 14;

Test(my_strlen, string_len) {
    cr_assert(my_strlen(str) == len);
}
