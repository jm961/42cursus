#include "libft.h"
#include <limits.h>

static int ft_count_digits(long n)
{
    int count;

    count = 0;
    if (n <= 0)
        count++;
    while (n != 0)
    {
        n /= 10;
        count++;
    }
    return (count);
}

char *ft_itoa(int n)
{
    char *str;
    int len;
    long num;
    int i;

    num = n;
    len = ft_count_digits(num);
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
        return (NULL);

    i = len;
    str[i] = '\0';
    i--;

    if (num < 0)
    {
        str[0] = '-';
        num = -num;
    }
    if (num == 0)
        str[0] = '0';

    while (num > 0)
    {
        str[i] = (num % 10) + '0';
        num /= 10;
        i--;
    }
    return (str);
}