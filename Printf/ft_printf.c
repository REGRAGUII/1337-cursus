/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryuuk_reg <ryuuk_reg@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:32:45 by yregragu          #+#    #+#             */
/*   Updated: 2023/12/18 17:23:31 by ryuuk_reg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_printf(const char *format, ...)
{
	va_list args;
	size_t  len;

	len = 0;
	while (*format)
	{
		if (*format == '%')
			format++;
			ft_checker(*format, len);
		else
			ft_putchar(*format);
		format++;
	}
}