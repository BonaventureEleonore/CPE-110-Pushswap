/*
** EPITECH PROJECT, 2021
** test
** File description:
** test pushswap
*/

#include "pushswap.h"

int lunch_pushswap(int size, char **fill);

int size_list(linked_t *head);

void redirect_all_std(void);

Test(size_list , simple_list , .init = redirect_all_std)
{
    char *av[] = {"./push_swap", "32", "6241", "8461", "227", NULL};

    lunch_pushswap(5, av);
    cr_assert_stdout_eq_str("pb rra pb pb pb pa pa pa pa\n");
}

Test(size_list , simple_li , .init = redirect_all_std)
{
    char *av[] = {"./push_swap", "5", "4", "3", "2", "1", NULL};

    lunch_pushswap(6, av);
    cr_assert_stdout_eq_str("rra pb rra pb rra pb ra pb pb pa pa pa pa pa\n");
}

Test(size_list , simple_sorted , .init = redirect_all_std)
{
    char *av[] = {"./push_swap", "1", "2", "3", "4", "5", NULL};

    lunch_pushswap(6, av);
    cr_assert_stdout_eq_str("\n");
}

Test(size_list , simple_one , .init = redirect_all_std)
{
    char *av[] = {"./push_swap", "1", NULL};

    lunch_pushswap(2, av);
    cr_assert_stdout_eq_str("\n");
}
