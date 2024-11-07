/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:19:02 by rcorlett          #+#    #+#             */
/*   Updated: 2024/11/07 12:20:42 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

/*
#include "ft_lstnew.c"
#include <stdio.h>
int main(void)
{
    t_list *node = ft_lstnew("1");
    node->next = ft_lstnew("2");
    node->next->next = ft_lstnew("3");
    node->next->next->next = ft_lstnew("4");
    node->next->next->next->next = ft_lstnew("5");

    int size = ft_lstsize(node);
    printf("The size of the list is: %d\n", size);
    while (node)
	{
        t_list *temp = node;
        node = node->next;
        free(temp);
    }
    return (0);
}*/
