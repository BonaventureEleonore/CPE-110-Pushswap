/*
** EPITECH PROJECT, 2021
** test
** File description:
** test lib
*/

#include "pushswap.h"

void redirect_all_std(void)
{
    cr_redirect_stdout ();
    cr_redirect_stderr ();
}

Test(my_putstr , simple_str_f , .init = redirect_all_std)
{
    my_putstr("bonjour");
    cr_assert_stdout_eq_str("bonjour");
}

Test(my_putnbr , simple_nbr , .init = redirect_all_std)
{
    my_put_nbr(12);
    cr_assert_stdout_eq_str("12");
}

Test(my_putnbr , simple_nbru , .init = redirect_all_std)
{
    my_put_nbru(12345678);
    cr_assert_stdout_eq_str("12345678");
}

Test(my_putnbr , simple_nbrul , .init = redirect_all_std)
{
    my_put_nbru(123456789);
    cr_assert_stdout_eq_str("123456789");
}

Test(my_putchar , simple_char , .init = redirect_all_std)
{
    my_putchar('a');
    cr_assert_stdout_eq_str("a");
}
