/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 01:05:49 by yregragu          #+#    #+#             */
/*   Updated: 2023/11/03 18:06:33 by yregragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	x;

	if (!dest && !src)
		return (0);
	x = 0;
	while (x < n)
	{
		((char *) dest)[x] = ((char *)src)[x];
		x++;
	}
	return (dest);
}
