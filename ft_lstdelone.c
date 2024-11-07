/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:32:55 by rcorlett          #+#    #+#             */
/*   Updated: 2024/11/07 11:37:33 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	del((void *)lst->);
	free(lst);
}
/*
void	del(void *lst)
{
	free(lst);
}

#include "ft_lstnew.c"
#include "ft_strdup.c"
#include "ft_strlen.c"
#include <stdio.h>

int	main(void)
{
	char *content = ft_strdup("Renan");
	t_list *node = ft_lstnew(content);
	ft_lstdelone(node, del);
	node = NULL;
}*/
