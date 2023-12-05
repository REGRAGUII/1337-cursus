/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:44:24 by yregragu          #+#    #+#             */
/*   Updated: 2023/12/05 21:00:11 by yregragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	x;

	if (!big && !len)
		return (NULL);
	if (!*little)
		return ((char *)big);
	while (*big && len--)
	{
		x = 0;
		while (*(big + x) == *(little + x) && x < len && *(little + x))
		{
			if (!*(little + x + 1))
				return ((char *)big);
			x++;
		}
		big++;
	}
	return (NULL);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	count;
	size_t	n_len;
	char	*temp;

	i = 0;
	temp = (char *)big;
	n_len = ft_strlen(little);
	if (n_len == 0 || big == little)
		return (temp);
	while (temp[i] != 0 && i < len)
	{
		count = 0;
		while (temp[i + count] != '\0' && little[count] != '\0' && temp[i
				+ count] == little[count] && i + count < len)
			count++;
		if (count == n_len)
			return (temp + i);
		i++;
	}
	return (0);
}
