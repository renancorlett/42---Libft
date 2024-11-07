/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:43:04 by rcorlett          #+#    #+#             */
/*   Updated: 2024/11/07 11:45:30 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (0);
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
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

    printf("The last node of the list is: %s\n",
	(char*)ft_lstlast(node)->content);
	printf("Located at (%p)\n", (void *)ft_lstlast(node));

    while (node)
    {
        t_list *temp = node;
        node = node->next;
        free(temp);
    }
    
    return (0);
}*/
