/*
** EPITECH PROJECT, 2021
** pa
** File description:
** move the first element of b at the first place in a
*/

#include "pushswap.h"

void pa_f(linked_t **head_a, linked_t **head_b)
{
    int nb_switch = 0;
    linked_t *first = *head_b;

    nb_switch = first->nb;
    *head_a = create_new_node_b(*head_a, nb_switch);
    *head_b = supp_first(*head_b);
    my_putstr("pa");
}
