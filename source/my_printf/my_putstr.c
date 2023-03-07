/*
** EPITECH PROJECT, 2022
** my_putstr
** File description:
** my_putstr
*/
#include<unistd.h>
#include<stdarg.h>
#include<stdlib.h>

void my_putchar(char c);

int my_putstr(char *str)
{
    int i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}
