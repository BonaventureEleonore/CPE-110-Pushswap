/*
** EPITECH PROJECT, 2021
** my_putstr
** File description:
** print a string
*/

void my_putchar(char c);

int my_putstr(char const *str)
{
    int e = 0;

    while (str[e] != '\0') {
        my_putchar(str[e]);
        e++;
    }
    return 0;
}
