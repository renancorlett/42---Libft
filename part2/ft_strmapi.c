#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int  i;
    char                *str;

    if(!s || !f)
        return (NULL);
    str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (!str)
        return (NULL);
    i = 0;
    while (s[i])
    {
        str[i] = f(i, s[i]);
        i++;
    }    
    str[i] = '\0';
    return (str);
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
    char    *str = "abcde";
    char    *result;
    
    result = ft_strmapi(str, ft_toupper);
    if (result)
    {
        printf("Result = %s\n", result);
        free(result);
    }
    return (0);
}*/