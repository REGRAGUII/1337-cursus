/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:39:15 by yregragu          #+#    #+#             */
/*   Updated: 2023/12/21 18:47:34 by yregragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>


int	ft_printf(const char *format, ...);
void	ft_putchar(char c, int *len);
void   	ft_putstr(char *s, int *len);
void    ft_putnbr_base(unsigned int n, char c, int *len);
void	ft_putnbr(int n, int *len);


#endif