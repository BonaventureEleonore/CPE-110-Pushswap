/*
** EPITECH PROJECT, 2021
** createnodeb
** File description:
** create a new node at the begining with a saved nb;
*/

#include "pushswap.h"

linked_t *create_new_node_b(linked_t *head_a, int nb_switch)
{
    linked_t *new = malloc(sizeof(linked_t));
    if (new == NULL)
        return NULL;
    new->nb = nb_switch;
    new->next = NULL;
    new->next = head_a;
    return new;
}

linked_t *create_new_node_e(linked_t *head_a, int nb_switch)
{
    linked_t *new = malloc(sizeof(linked_t));
    linked_t *tmp = head_a;

    if (new == NULL)
        return NULL;
    new->nb = nb_switch;
    new->next = NULL;
    while (tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = new;
    return head_a;
}
