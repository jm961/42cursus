#include "libft.h"

char *ft_itoa(int n)
{
    char *str;
    int len;
    int sign;
    int i;

    len = 1;
    sign = (n < 0) ? -1 : 1;
    if (n < 0)
        n = -n;
    while (n / len >= 10)
        len *= 10;
    str = (char *)malloc(sizeof(char) * (len + 2));
    if (!str)
        return (NULL);
    i = 0;
    if (sign == -1)
        str[i++] = '-';
    while (len > 0)
    {
        str[i++] = (n / len) + '0';
        n %= len;
        len /= 10;
    }
    str[i] = '\0';
    return str;
}