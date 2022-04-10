/*
** EPITECH PROJECT, 2021
** find small
** File description:
** fonction that find the smallest number
*/

#include "pushswap.h"

int find_small(linked_t *head_a)
{
    int small = head_a->nb;

    while (head_a != NULL) {
        if (small >= head_a->nb) {
            small = head_a->nb;
        }
        head_a = head_a->next;
    }
    return small;
}

int find_loc_small(linked_t *head_a)
{
    int small = head_a->nb;
    int loc = 0;
    int loc_i = 0;

    while (head_a != NULL) {
        if (small >= head_a->nb) {
            small = head_a->nb;
            loc = loc_i;
        }
        loc_i++;
        head_a = head_a->next;
    }
    return loc;
}

int where_is_small(linked_t *head_a)
{
    int loc = find_loc_small(head_a);
    int size = size_list(head_a);

    if (loc > (size / 2))
        return 1;
    else
        return 2;
    return 0;
}
