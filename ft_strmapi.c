/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 16:53:40 by yregragu          #+#    #+#             */
/*   Updated: 2023/11/11 17:56:28 by yregragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dup;
	int		l;

	l = ft_strlen(s);
	if (!s || !f)
		return (0);
	dup = malloc(sizeof(char) * (l + 1));
	if (!dup)
		return (0);
	l = 0;
	while (s[l])
	{
		dup[l] = f(l, s[l]);
		l++;
	}
	dup[l] = '\0';
	return (dup);
}
