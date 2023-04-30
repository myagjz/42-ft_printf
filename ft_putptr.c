/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 21:47:07 by myagiz            #+#    #+#             */
/*   Updated: 2022/12/02 21:47:09 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexalenptr(unsigned long nbr)
{
	int	res;

	res = 0;
	while (nbr != 0)
	{
		nbr /= 16;
		res++;
	}
	return (res);
}

void	ft_printhexaptr(unsigned long long n)
{
	if (n >= 16)
	{
		ft_printhexaptr(n / 16);
		ft_printhexaptr(n % 16);
	}
	else
	{
		if (n > 9)
			ft_putchar(n - 10 + 'a');
		else
			ft_putchar(n + 48);
	}
}

int	ft_putptr(unsigned long long p)
{
	int	res;

	res = ft_putstr("0x");
	if (p == 0)
		res += ft_putchar('0');
	else
	{
		ft_printhexaptr(p);
		res += ft_hexalenptr(p);
	}
	return (res);
}
