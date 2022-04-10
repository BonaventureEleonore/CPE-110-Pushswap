/*
** EPITECH PROJECT, 2021
** size of list
** File description:
** count the numbre of node
*/

#include "pushswap.h"

int size_list(linked_t *head)
{
    int count = 0;
    linked_t *tmp = head;

    if (tmp == NULL)
        return 0;
    while (tmp != NULL) {
        tmp = tmp->next;
        count++;
    }
    return count;
}
