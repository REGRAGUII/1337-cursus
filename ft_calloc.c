/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:02:36 by yregragu          #+#    #+#             */
/*   Updated: 2023/12/04 17:52:47 by yregragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*x;

	x = malloc(size * nmemb);
	if (!x)
		return (0);
	ft_bzero(x, size * nmemb);
	return (x);
}

/*#include <stdio.h>
int main()
{
	char *str = ft_calloc(4,1);
	int	i = 0;
	
	while(i < 4)
	{
		printf("%d", str[i]);
		i++;
	}
}*/