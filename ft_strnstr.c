/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuguimo <esuguimo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 15:11:06 by esuguimo          #+#    #+#             */
/*   Updated: 2020/02/28 05:33:09 by esuguimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t l2;

	l2 = ft_strlen(s2);
	if (!l2)
		return ((char *)s1);
	while (*s1 && len >= l2)
	{
		if (!ft_strncmp(s1, s2, l2))
			return ((char *)s1);
		s1++;
		len--;
	}
	return (NULL);
}
