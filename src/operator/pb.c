/*
** EPITECH PROJECT, 2021
** pb
** File description:
** rotate
*/

#include "pushswap.h"

void pb_f(linked_t **head_a, linked_t **head_b)
{
    int nb_switch = 0;
    linked_t *first = *head_a;

    nb_switch = first->nb;
    *head_b = create_new_node_b(*head_b, nb_switch);
    *head_a = supp_first(*head_a);
    my_putstr("pb ");
}
