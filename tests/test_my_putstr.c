/*
** EPITECH PROJECT, 2023
** test my_put str
** File description:
** putstr
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../source/my_printf/myprintflib.h"

Test(my_putstr, simple_string) {
    char *str = "Hello\n";
    my_putstr(str);
    cr_assert(my_strcmp(str, "Hello\n") == 0,
    "Expected 'Hello\n', but got '%s'", str);
}
