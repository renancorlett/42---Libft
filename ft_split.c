/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:09:42 by rcorlett          #+#    #+#             */
/*   Updated: 2024/10/25 10:54:36 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//function = Allocates with malloc and returns an array of string obtained by
//splitting 's' using a char 'c' as a delimiter. Must end with a NULL pointer;
// s	= String to be splitted;
// c	= Delimiter character;
//if returns array of a new string from the split or NULL in the allocation=FAIL

#include "libft.h"

static int	ft_wordcount(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (count);
}

static int	ft_wordlen(char const *s, char c, int start)
{
	int	i;
	int	count;

	i = start;
	count = 0;
	while (s[i] && s[i] != c)
	{
		count++;
		i++;
	}
	return (count);
}

static char	*ft_getword(char const *s, char c, int start)
{
	char	*word;
	int		len;
	int		i;
	int		j;

	i = start;
	j = 0;
	len = ft_wordlen(s, c, start);
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	while (s[i] && s[i] != c)
		word[j++] = s[i++];
	word[j] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**arr;

	i = 0;
	j = -1;
	if (!s)
		return (NULL);
	arr = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!arr)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			arr[++j] = ft_getword(s, c, i);
		while (s[i] && s[i] != c)
			i++;
	}
	arr[++j] = NULL;
	return (arr);
}

/*#include <stdio.h>
int main(void)
{
	char **result = ft_split("renan=corlett", '=');
	int	i;
	
	if (result)
	{
		while (result[i])
		{
			printf("Word %d: %s\n", i, result[i]);
			free(result[i]);
			i++;
		}
		free (result);
	}
	return (0);
}*/
