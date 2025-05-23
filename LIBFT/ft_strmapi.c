#include "libft.h"
#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    char *str;

    if (!s || !f)
        return (0);
    str = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
    if (!str)
        return (0);
    i = 0;
    while (s[i])
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}