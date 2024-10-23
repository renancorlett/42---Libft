#include "libft.h"

void    ft_putendl_fd(char *s, int fd)
{
    if (!s)
        return (0);
    ft_putendl_fd(s, fd);    
    write (fd, &s, 1);
}

/*int   main(void)
{
    ft_putendl_fd("line",1);
    return (0);
}*/