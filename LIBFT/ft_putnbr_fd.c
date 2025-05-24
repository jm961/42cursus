#include "libft.h"
#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
    {
        write(fd, "-2147483648", 11);
        return;
    }
    if (n < 0)
    {
        write(fd, "-", 1);
        n = -n;
    }
    if (n >= 10)
        ft_putnbr_fd(n / 10, fd);
    char c = (n % 10) + '0';
    write(fd, &c, 1);
}

// int main(void)
// {
//     int fd = 1;
//     ft_putnbr_fd(42, fd);
//     write(fd, "\n", 1);
//     ft_putnbr_fd(-2147483648, fd);
//     write(fd, "\n", 1);
//     return 0;
// }