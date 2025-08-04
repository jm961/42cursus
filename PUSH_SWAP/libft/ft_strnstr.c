#include <stddef.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    if (*needle == '\0')
        return (char *)haystack;
    if (len == 0)
        return NULL;
    i = 0;
    while (haystack[i] && i < len)
    {
        j = 0;
        while (haystack[i + j] == needle[j] && haystack[i + j] && i + j < len)
        {
            j++;
            if (needle[j] == '\0')
                return (char *)(haystack + i);
        }
        i++;
    }
    return NULL;
}