#include "libft.h"
#include <stdlib.h>

char *ft_strdup(const char *s1)
{
    size_t i;
    char *s2;

    i = 0;
    while (s1[i])
        i++;
    s2 = (char *)malloc(i + 1);
    if (!s2)
        return 0;
    ft_memcpy(s2, s1, i);
    s2[i] = '\0';
    return s2;
}