/*
** EPITECH PROJECT, 2021
** my_strlen
** File description:
** return the size of a string
*/

#include <stdlib.h>

int my_strlen(char const *str)
{
    int e = 0;

    while (str[e] != '\0') {
        e++;
    }
    return (e);
}
