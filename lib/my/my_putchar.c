/*
** EPITECH PROJECT, 2021
** my_putchar
** File description:
** display one char
*/

#include <unistd.h>

int my_putchar(char c)
{
    if (write(1, &c, 1) == -1)
        return 84;
}
