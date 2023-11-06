/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:44:24 by yregragu          #+#    #+#             */
/*   Updated: 2023/11/06 00:38:44 by yregragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	len0;
	size_t	x;
	
	len0 = ft_strlen(little);
	if (*little == '\0')
		return ((char *)big);
	while (*big != '\0' && x < len)
	{
		if (big[x] == little[x] && len - x >= len0 && ft_strncmp(&big[x], little, len0) == 0)
			return ((char *) &big[x]);
		x++;
	}
	return (0);
}

int main()
{
	char p;
	
	const char *b[] = "hallomtre";
	const char *s[] = "mtr";

	p = ft_strnstr(b, s, 3);
	printf("%s", p);
}