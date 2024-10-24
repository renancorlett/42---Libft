/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:09:42 by rcorlett          #+#    #+#             */
/*   Updated: 2024/10/21 15:09:54 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*word_dup(const char *s, int start, int end)
{
	char	*word;
	int		i;

	word = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static void	free_memory(char **result, int j)
{
	while (j > 0)
		free(result[--j]);
	free(result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;
	int		start;

	result = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!s || !result)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			result[j] = word_dup(s, start, i);
			if (!result[j])
				return (free_memory(result, j), NULL);
			j++;
		}
		else
			i++;
	}
	result[j] = NULL;
	return (result);
}

/*
#include <stdio.h>
int main(void)
{
    char **result;
    result = ft_split("Hello World 42", ' ');
    printf("Word 1: %s\n", result[0]);
    printf("Word 2: %s\n", result[1]);
    printf("Word 3: %s\n", result[2]);
    return (0);
}
*/
