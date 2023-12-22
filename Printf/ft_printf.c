/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:32:45 by yregragu          #+#    #+#             */
/*   Updated: 2023/12/22 16:31:18 by yregragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void ft_flag_checker(va_list args, char c, int *len)
{
	if (c == '%')
		ft_putchar(c, len);
	else if (c == 'c')
		ft_putchar(va_arg(args, int), len);
	else if (c == 's')
		ft_putstr(va_arg(args, char*), len);
	else if (c == 'u')
		ft_putnbr(va_arg(args, unsigned int), len);
	else if (c == 'i' || c == 'd')
		ft_putnbr(va_arg(args, int), len);
	else if (c == 'x' || c == 'X')
		ft_putnbr_base(va_arg(args, unsigned long), c,len);
	else if (c == 'p')
	{
		ft_putstr("0x", len);
		ft_putnbr_base(va_arg(args, unsigned long int), 'x',len);
	}
	
}

int ft_printf(const char *format, ...)
{
	va_list	args;
	int	len;
	int i = 0;

	len = 0;
	if (format[i] == '%' && format[i + 1])
		return(0);
    va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			ft_flag_checker(args, *format, &len);
		}
		else
			ft_putchar(*format, &len);
		format++;
    }
    va_end(args);
    return (len);
}

// int main()
// {
// 	int i , x;
// 	x = ft_printf("dyalna \n%s\n%c\n%i\n%d\n%x\n%X\n%p", "allo",'g',2147483647, 2147483647, 254, 254, (int)-1);

// 	i = printf("libc \n%s\n%c\n%i\n%d\n%x\n%X\n%p", "allo",'g',2147483647, 2147483647, 254, 254, (int)-1);
// 	printf("lent dyalna |%i|",x);
// 	printf("lent dyalhom |%i|",i);
// }
