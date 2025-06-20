#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    void *p;
    size_t total_size;

    total_size = count * size;
    if (size != 0 && total_size / size != count)
    {
        return NULL;
    }
    p = malloc(count * size);
    if (!p)
        return NULL;
    ft_bzero(p, total_size);
    return (p);
}