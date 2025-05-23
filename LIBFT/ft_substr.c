#include "libft.h"
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    size_t s_len;
    char *substr;

    i = 0;
    s_len = 0;

    if (!s)
        return 0;

    while (s[s_len])
        s_len++;

    if (start >= s_len)
        return (char *)malloc(1);

    if (len > s_len - start)
        len = s_len - start;

    substr = (char *)malloc(sizeof(char) * (len + 1));
    if (!substr)
        return 0;

    while (i < len && s[start + i])
    {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = '\0';

    return substr;
}