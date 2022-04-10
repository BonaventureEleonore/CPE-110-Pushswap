/*
** EPITECH PROJECT, 2021
** test
** File description:
** test
*/

#include "pushswap.h"

linked_t *create_a(int ac, char **av)
{
    linked_t *head_a = malloc(sizeof(linked_t));
    linked_t *node;

    head_a->nb = my_getnbr(av[1]);
    head_a->next = NULL;
    node = malloc(sizeof(linked_t));
    node->nb = my_getnbr(av[2]);
    head_a->next = node;
    node->next = NULL;
    for (int i = 3; i < ac; i++) {
        node->next = malloc(sizeof(linked_t));
        node->next->nb = my_getnbr(av[i]);
        node = node->next;
        node->next = NULL;
    }
    return head_a;
}
