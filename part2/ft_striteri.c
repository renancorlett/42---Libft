#include "libft.h"

void    ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned int    i;

    if(!s || !f)
        return (0);
    i = 0;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}

/*#include <stdio.h>
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

int    main(void)
{
    char    str[] = "Acorda, menino!";

    ft_striteri(str, ft_toupper);
    printf("Result = %s\n", str);
    return (0);
}*/