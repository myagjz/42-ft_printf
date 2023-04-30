/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrui.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 21:46:58 by myagiz            #+#    #+#             */
/*   Updated: 2022/12/02 21:47:02 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	countui(unsigned int n)
{
	int	count;

	count = 0;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoaui(unsigned int n)
{
	char	*s;
	int		len;

	len = countui(n);
	s = (char *)malloc(len + 1);
	s[len] = '\0';
	while (n != 0)
	{
		s[--len] = n % 10 + 48;
		n = n / 10;
	}
	return (s);
}

int	ft_print_unsigned(unsigned int n)
{
	char	*s;
	int		len;

	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	s = ft_itoaui(n);
	len = ft_putstr(s);
	free(s);
	return (len);
}
