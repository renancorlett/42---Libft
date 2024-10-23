#include "libft.h"

void    ft_putstr_fd(char *s, int fd)
{
    int    i;

    if (!s)
        return (0);
    while (s[i])
    {
        write (fd, &s[i], 1);
        i++;
    }
}


/*int    main(void)
{
    ft_putstr_fd("Hi, 42!\n", 1);
    return (0);
}*/