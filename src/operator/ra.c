/*
** EPITECH PROJECT, 2021
** ra
** File description:
** rotate
*/

#include "pushswap.h"

linked_t *ra_f(linked_t *head_a)
{
    int nb_switch = 0;
    linked_t *first = head_a;

    if (head_a == NULL)
        return NULL;
    nb_switch = first->nb;
    head_a = create_new_node_e(head_a, nb_switch);
    head_a = supp_first(head_a);
    my_putstr("ra ");
    return head_a;
}
