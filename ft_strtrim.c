/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:23:02 by yregragu          #+#    #+#             */
/*   Updated: 2023/11/10 14:09:51 by yregragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	x;
	int	y;

	i = 0;
	while (set[i])
	{
		if (s1[i] == set[i])
			i++;
	}
	x = i;
	i = ft_strlen(s1) - 1;
	while (i > 0)
	{
		if (s1[i] == set[i])
			i--;
	}
	y = i;
	
}
