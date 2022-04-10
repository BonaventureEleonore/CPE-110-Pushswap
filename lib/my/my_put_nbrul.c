/*
** EPITECH PROJECT, 2021
** my_put_nbr_ul
** File description:
** print an unsigned long
*/

void my_putchar(char c);

long my_put_nbrul(unsigned long nb)
{
    int rg = 1;
    unsigned long buff = nb;

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
