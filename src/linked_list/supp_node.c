/*
** EPITECH PROJECT, 2021
** supp_last_node
** File description:
** supp the last node of a linked list
*/

#include "pushswap.h"

linked_t *supp_last(linked_t *head_a)
{
    linked_t *tmp = head_a;

    while (tmp->next->next != NULL)
        tmp = tmp->next;
    free(tmp->next);
    tmp->next = NULL;
    return head_a;
}

linked_t *supp_first(linked_t *head_a)
{
    linked_t *tmp = NULL;

    if (head_a != NULL) {
        tmp = head_a->next;
        free(head_a);
    }
    return tmp;
}
