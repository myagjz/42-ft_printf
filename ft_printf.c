/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 21:45:54 by myagiz            #+#    #+#             */
/*   Updated: 2022/12/03 02:05:50 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_format(const char c, va_list args)
{
	int	res;

	res = 0;
	if (c == '%')
		res += ft_putchar('%');
	else if (c == 'c')
		res += ft_putchar(va_arg(args, int));
	else if (c == 's')
		res += ft_putstr(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		res += ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		res += ft_print_unsigned(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		res += ft_putnbrhexa(c, va_arg(args, unsigned int));
	else if (c == 'p')
		res += ft_putptr(va_arg(args, unsigned long long));
	return (res);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		res;
	int		i;

	i = 0;
	res = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			res += ft_format(str[i], args);
		}
		else
			res += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (res);
}
