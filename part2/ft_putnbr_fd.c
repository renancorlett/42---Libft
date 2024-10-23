#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    char    result;
    long    num;

    num = n;
    if (n < 0)
    {
        write (fd, "-", 1);
        num = -num;
    }
    if (n > 9)
        ft_putnbr_fd(num / 10, fd);
    result = (num % 10) + '0';
    write (fd, &result, 1);
}

/*int    main(void)
{
    ft_putnbr_fd(42, 1);
    return (0);
}*/