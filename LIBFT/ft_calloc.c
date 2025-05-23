#include "libft.h"
#include <stdlib.h>

void *ft_calloc(int count, int size)
{
    void *ptr;

    if (count == 0 || size == 0)
        return (NULL);
    ptr = malloc(count * size);
    if (ptr == NULL)
        return (NULL);
    ft_bzero(ptr, count * size);
    return (ptr);
}