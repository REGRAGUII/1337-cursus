/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:36:58 by yregragu          #+#    #+#             */
/*   Updated: 2024/02/01 17:16:31 by yregragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c && c[i])
		i++;
	return (i);
}

// char	*ft_strjoin(char *s1, char *s2)
// {
// 	int		i;
// 	char	*str;
// 	int		len1;
// 	int		len2;

// 	len1 = ft_strlen(s1);
// 	len2 = ft_strlen(s2);
// 	i = 0;
// 	if (s1 || s2)
// 	{
// 		str = malloc(sizeof(char) * (len1 + len2)+1);
// 		if (!str)
// 			return (NULL);
// 		while (i < len1)
// 		{
// 			str[i] = s1[i];
// 			i++;
// 		}
// 		len2 = 0;
// 		while (i < (len1 + ft_strlen(s2)))
// 			str[i++] = s2[len2++];
// 		str[len1+ft_strlen(s2)] = '\0';
// 	}
// 	return (str);
// }

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	y;
	size_t	x;
	char	*s;

	x = 0;
	y = 0;
	if (!s1 || !s2)
		return (0);
	s = malloc (sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s)
		return (0);
	while (s1[x])
	{
		s[x] = s1[x];
		x++;
	}
	while (s2[y])
	{
		s[x] = s2[y];
		x++;
		y++;
	}
	s[x] = '\0';
	return (s);
}



char *ft_strdup(char *s)
{
	char *x;
	int	i;

	i = 0;
	if(!(x = malloc (sizeof(char) * ft_strlen(s) + 1)))
		return (0);
	while (s[i])
	{
		x[i] = s[i];
		i++;
	}
	x[i] = '\0';
	return (x);
}