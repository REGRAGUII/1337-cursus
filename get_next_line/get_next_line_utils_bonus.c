/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 17:12:54 by yregragu          #+#    #+#             */
/*   Updated: 2024/03/31 23:51:32 by yregragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(char *c)
{
	size_t	i;

	i = 0;
	while (c && c[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	char	*str;
	size_t	len1;
	size_t	len2;

	str = NULL;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	i = 0;
	if (s1 || s2)
	{
		str = malloc(sizeof(char) * (len1 + len2) + 1);
		if (!str)
			return (NULL);
		while (i < len1)
		{
			str[i] = s1[i];
			i++;
		}
		len2 = 0;
		while (i < len1 + ft_strlen(s2))
			str[i++] = s2[len2++];
		str[len1 + ft_strlen(s2)] = '\0';
	}
	return (str);
}

char	*ft_strdup(char *s)
{
	char	*x;
	int		i;

	i = 0;
	x = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!x)
		return (NULL);
	while (s[i])
	{
		x[i] = s[i];
		i++;
	}
	x[i] = '\0';
	return (x);
}
