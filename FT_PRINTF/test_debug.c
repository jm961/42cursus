#include "include/ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main()
{
    printf("Testing with printf:\n");
    printf(" %p %p ", (void *)LONG_MIN, (void *)LONG_MAX);
    printf("\n");

    printf("Testing with ft_printf:\n");
    ft_printf(" %p %p ", (void *)LONG_MIN, (void *)LONG_MAX);
    printf("\n");

    return 0;
}
