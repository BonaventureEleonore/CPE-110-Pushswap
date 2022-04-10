/*
** EPITECH PROJECT, 2021
** pushwap
** File description:
** pushswap
*/

#ifndef FONCTIONS_H_
    #define FONCTIONS_H_

    #include <criterion/criterion.h>
    #include <criterion/redirect.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <stddef.h>
    #include <dirent.h>
    #include <unistd.h>
    #include "linked_list.h"
    #include "my.h"

    linked_t *my_params_to_list(int ac, char * const *av);
    void fill_a(linked_t *list_a, linked_t *list_b);

    linked_t *create_a(int ac, char **av);
    linked_t *create_b(void);
    linked_t *create_new_node_b(linked_t *head_a, int nb_switch);
    linked_t *create_new_node_e(linked_t *head_a, int nb_switch);
    linked_t *supp_first(linked_t *head_a);
    linked_t *supp_last(linked_t *head_a);

    void print_list(linked_t *head);

    void pa_f(linked_t **head_a, linked_t **head_b);
    void pb_f(linked_t **head_a, linked_t **head_b);
    linked_t *rra_f(linked_t *head_a);
    linked_t *ra_f(linked_t *head_a);
    linked_t *sa(linked_t *head_a);
    linked_t *loop_rra(linked_t *list_a);
    linked_t *loop_ra(linked_t *list_a);

    int where_is_small(linked_t *head_a);
    int find_small(linked_t *head_a);
    int find_loc_small(linked_t *head_a);
    int size_list(linked_t *head);
    int is_sorted(linked_t *list_a);

    int lunch_pushswap(int size, char **fill);
    void pushswap(linked_t *list_a, linked_t *list_b);

#endif /* !FONCTIONS_H_ */
