/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuguimo <esuguimo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 15:10:18 by esuguimo          #+#    #+#             */
/*   Updated: 2020/02/28 06:19:09 by esuguimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	offset;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	offset = dst_len;
	i = 0;
	if (size <= dst_len)
		return (src_len + size);
	while (src[i] && offset != size - 1)
	{
		dst[offset] = src[i];
		offset++;
		i++;
	}
	dst[offset] = '\0';
	return (dst_len + src_len);
}
