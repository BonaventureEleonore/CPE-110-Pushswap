/*
** EPITECH PROJECT, 2021
** my_put_nbr
** File description:
** print an unsigned int
*/

void my_putchar(char c);

int my_put_nbru(unsigned int nb)
{
    int rg = 1;
    unsigned int buff = nb;

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
