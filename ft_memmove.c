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
	char	*temp_s;
	char	*temp_d;

	temp_s = (char *) src;
	temp_d = (char *) dest;
	if (!dest && !src)
		return (0);
	if (temp_d < temp_s)
		return (ft_memcpy(temp_d, temp_s, n));
	while (n--)
		temp_d[n] = temp_s[n];
	return (dest);
}
