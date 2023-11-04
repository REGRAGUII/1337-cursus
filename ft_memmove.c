/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:55:35 by yregragu          #+#    #+#             */
/*   Updated: 2023/11/03 18:06:31 by yregragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (0);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	while (n--)
		*((unsigned char*)(dest + n)) = *((unsigned char*)(src + n));
	return (dest);
}
