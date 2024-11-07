/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:13:19 by rcorlett          #+#    #+#             */
/*   Updated: 2024/11/07 11:25:00 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lsdadd_front(t_list **lst, t_list *new)
{
	if (new)
	{
		new->next = *lst;
		*lst = new;
	}
}

/*#include "ft_lstnew.c"
#include <stdio.h>

int	main(void)
{
	t_list *head = NULL;
	
	t_list *node1 = ft_lstnew("1");
	t_list *node2 = ft_lstnew("2");
	
	ft_lstadd_front(&head, node1);
	
	printf("1st is: %s\nlocated at: (%p)\n",
	(char *)head->content, (void *)head->content);
	printf("and it points to: (%p)\n\n", (void *)head

	ft_lstadd_front(&head, node2);

	printf("After ft_lstadd_front the 1st node is: %s"
	(char *)head->content, (void *)head->content);
	printf("and it points to: (%p)\n", (void *)head->

	free(node1);
	free(node2);
	return (0);
}*/
