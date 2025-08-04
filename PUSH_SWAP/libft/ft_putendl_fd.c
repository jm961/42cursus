#include "libft.h"
#include <unistd.h>

void ft_putendl_fd(char *s, int fd)
{
    if (!s)
        return;
    while (*s)
    {
        write(fd, s, 1);
        s++;
    }
    write(fd, "\n", 1);
}

// int main(void)
// {
//     char str[] = "Hello, World!";
//     int fd = 1; // Standard output

//     ft_putendl_fd(str, fd);

//     return 0;
// }