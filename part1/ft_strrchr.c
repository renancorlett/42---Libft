/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:07:52 by rcorlett          #+#    #+#             */
/*   Updated: 2024/10/22 11:29:59 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//function = search for the last occurance of a character;
//c	= character to search for;
//s	= Pointer to the string to be searched;
//if returns the pointer for the last occurence of c (SUCCESS);
//if returns null (FAILURE).

#include "libft.h"

char	*ft_strrchr(const char *s, int c)

{
	int	i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

/*#include <stdio.h>
int	main(void)
{
	char *str = "Hello, world";
	printf("Result: %s\n", ft_strrchr(str, 'H'));
	printf("Result: %s\n", ft_strrchr(str, 'a'));
	printf("Result: %s\n", ft_strrchr(str, '\0'));
	return (0);
}*/
