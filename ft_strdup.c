/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:30:19 by yregragu          #+#    #+#             */
/*   Updated: 2023/11/06 20:44:18 by yregragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strdup(const char *s1)
{
	char	*dup;
	size_t	x;

	dup = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!dup)
		return (0);
	while (*s1 != '\0')
	{
		*dup = *s1;
		dup++;
		s1++;
	}
	dup = '\0';
	return (dup);
}
    int main()
	{
    char s[] = "hello youssef";
    printf("%s\n", *ft_strdup(s));
    printf("%s", *strdup(s));
    
      return 0;
	}