/*
** EPITECH PROJECT, 2021
** my_getnbr
** File description:
** task05
*/

int my_getnbr(char const *str)
{
    int i = 0;
    int k = 0;
    int tired = 1;
    long long final = 0;

    while (str[i] != '\0') {
        while (str[i] >= '0' && str[i] <= '9') {
            k = (str[i] - 48);
            final = (final * 10) + k;
            if (final > 2147483648 || final < -2147483648)
                return (0);
            i = i + 1;
        }
        if (final != 0)
            return (final * tired);
        if (str[i] == '-')
            tired = tired * -1;
        i = i + 1;
    }
    return (final * tired);
}
