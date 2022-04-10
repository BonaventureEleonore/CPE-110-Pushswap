/*
** EPITECH PROJECT, 2021
** pushswap
** File description:
** do loop
*/

#include "pushswap.h"

linked_t *loop_rra(linked_t *list_a)
{
    int smallest = find_small(list_a);

    while (list_a->nb != smallest) {
        list_a = rra_f(list_a);
    }
    return list_a;
}

linked_t *loop_ra(linked_t *list_a)
{
    int smallest = find_small(list_a);

    while (list_a->nb != smallest) {
        list_a = ra_f(list_a);
    }
    return list_a;
}
