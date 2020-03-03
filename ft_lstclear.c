/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuguimo <esuguimo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 19:50:52 by esuguimo          #+#    #+#             */
/*   Updated: 2020/02/20 21:13:28 by esuguimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*before;

	if (!*lst)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		before = *lst;
		*lst = before->next;
		free(before);
	}
	*lst = NULL;
}
