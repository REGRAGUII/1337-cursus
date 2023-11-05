/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:27:49 by yregragu          #+#    #+#             */
/*   Updated: 2023/11/05 17:57:53 by yregragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	len;
	
	len = ft_strlen(s);
	while (len-- > 0)
	{
		if (*(s + len) == (char)c)
			return ((char *)(s + len));
	}
	return(0);
}
