/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 21:46:40 by myagiz            #+#    #+#             */
/*   Updated: 2022/12/02 23:08:19 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_numlen(int num)
{
	int	i;

	if (num == 0)
		return (1);
	i = 0;
	while (num != 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*res;
	long	nbr;

	nbr = n;
	len = ft_numlen(nbr);
	if (n < 0)
	{
		len++;
		nbr = -nbr;
	}
	res = malloc(sizeof(char) * len + 1);
	if (!res)
		return (0);
	res[len--] = '\0';
	while (nbr > 0)
	{
		res[len--] = nbr % 10 + 48;
		nbr /= 10;
	}
	if (n < 0)
		res[0] = '-';
	if (n == 0)
		res[0] = '0';
	return (res);
}
