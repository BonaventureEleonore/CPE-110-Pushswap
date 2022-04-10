/*
** EPITECH PROJECT, 2021
** pushswap
** File description:
** sort the list
*/

#include "pushswap.h"

int is_sorted(linked_t *list_a)
{
    int nb = list_a->nb;

    while (list_a != NULL) {
        if (nb > list_a->nb)
            return 1;
        nb = list_a->nb;
        list_a = list_a->next;
    }
    return 0;
}

void fill_a(linked_t *list_a, linked_t *list_b)
{
    int size;

    while (list_b != NULL) {
        pa_f(&list_a, &list_b);
        size = size_list(list_b);
        if (size != 0)
            my_putchar(' ');
    }
    my_putchar('\n');
}

void pushswap(linked_t *list_a, linked_t *list_b)
{
    while (list_a != NULL) {
        if (where_is_small(list_a) == 1) {
            list_a = loop_rra(list_a);
            pb_f(&list_a, &list_b);
        }
        if (where_is_small(list_a) == 2) {
            list_a = loop_ra(list_a);
            pb_f(&list_a, &list_b);
        }
    }
    fill_a(list_a, list_b);
}
