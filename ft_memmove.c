/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuguimo <esuguimo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 15:08:52 by esuguimo          #+#    #+#             */
/*   Updated: 2020/02/28 02:26:52 by esuguimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dest;
	unsigned char		*source;
	size_t				i;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	i = 0;
	if (!src && !dst)
		return (NULL);
	if (src < dst)
	{
		source += len;
		dest += len;
		while (len--)
			*(--dest) = *(--source);
	}
	else
		while (len--)
			*(dest++) = *(source++);
	return (dst);
}
