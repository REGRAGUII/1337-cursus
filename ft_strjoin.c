/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:54:23 by yregragu          #+#    #+#             */
/*   Updated: 2023/11/09 15:21:59 by yregragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len01;
	size_t	len02;
	char	*s;

	len01 = ft_strlen(s1);
	len02 = ft_strlen(s2);
	s = malloc (sizeof(char) * (len01 + len02 + 1));
	while (*s1 && s1)
	{
		*s = *s1;
		s++;
		s1++;
	}
	while (*s2 && s2)
	{
		*s = *s2;
		s++;
		s2++;
	}
	*s = '\0';
	return (s);
}
