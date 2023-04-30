/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 21:46:09 by myagiz            #+#    #+#             */
/*   Updated: 2022/12/03 02:56:10 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nbr)
{
	int		i;
	char	*s;

	i = 0;
	if (nbr == 0)
	{
		(write(1, "0", 1));
		return (1);
	}
	s = ft_itoa(nbr);
	i = ft_putstr(s);
	free(s);
	return (i);
}