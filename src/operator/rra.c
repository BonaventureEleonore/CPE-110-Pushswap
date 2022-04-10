/*
** EPITECH PROJECT, 2021
** rra
** File description:
** rotate
*/

#include "pushswap.h"

linked_t *rra_f(linked_t *head_a)
{
    int round = size_list(head_a) - 2;
    int index = 0;
    int nb_switch = 0;
    linked_t *end = head_a;

    if (head_a == NULL)
        return NULL;
    while (index <= round) {
        end = end->next;
        index++;
    }
    nb_switch = end->nb;
    head_a = create_new_node_b(head_a, nb_switch);
    head_a = supp_last(head_a);
    my_putstr("rra ");
    return head_a;
}
