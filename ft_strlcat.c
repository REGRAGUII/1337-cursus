/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryuuk_reg <ryuuk_reg@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:40:33 by yregragu          #+#    #+#             */
/*   Updated: 2023/11/23 18:46:44 by ryuuk_reg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_min(size_t x, size_t y)
{
	if (x < y)
		return (x);
	return (y);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	x;
	size_t	rs;
	
	x = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	rs = srclen + ft_min(dstlen, size);
	if (size = 0)
		return (rs);
	while (src[x] && dstlen + x < size - 1)
	{
		dst[dstlen + x] = src[x];
		x++;
	}
	dst[dstlen + x] = '\0';
	return (rs);
}
