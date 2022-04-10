/*
** EPITECH PROJECT, 2021
** lunch pushswap
** File description:
** for test
*/

#include "pushswap.h"

int lunch_pushswap(int size, char **fill)
{
    linked_t *list_a = NULL;
    linked_t *list_b = NULL;

    if (size == 2) {
        my_putchar('\n');
        return 0;
    }
    if (size < 3)
        return 84;
    list_a = create_a(size, fill);
    list_b = create_b();
    if (is_sorted(list_a) == 0) {
        my_putchar('\n');
    } else
        pushswap(list_a, list_b);
    return 0;
}
