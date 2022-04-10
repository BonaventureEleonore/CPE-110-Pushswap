/*
** EPITECH PROJECT, 2021
** put_nbr
** File description:
** print a nbr in the good format
*/

void my_putchar(char c);

int my_put_nbr(int nb)
{
    int rg = 1;
    int buff = nb;

    if (nb < 0) {
        my_putchar('-');
        my_put_nbr(nb * -1);
        return 0;
    }
    while (buff > 9) {
        buff /= 10;
        rg *= 10;
    }
    while (rg >= 1) {
        my_putchar(((nb / rg) % 10) + '0');
        rg /= 10;
    }
    return (0);
}
