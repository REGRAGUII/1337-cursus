/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 16:01:28 by yregragu          #+#    #+#             */
/*   Updated: 2023/12/21 18:36:24 by yregragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putstr(char *s, int *len)
{
	if (s == NULL)
		ft_putstr("null", len);
	while (*s)
	{
		ft_putchar(*s, len);
		s++;
	}
}