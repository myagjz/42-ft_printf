/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 21:46:01 by myagiz            #+#    #+#             */
/*   Updated: 2022/12/03 03:02:36 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
char	*ft_itoa(int nbr);
int		ft_putchar(char c);
int		ft_format(const char c, va_list args);
int		ft_putnbr(int nbr);
int		ft_putstr(const char *c);
int		ft_print_unsigned(unsigned int n);
int		ft_putnbrhexa(char c, unsigned int nbr);
int		ft_putptr(unsigned long long nbr);
int		ft_hexalen(unsigned int nbr);
void	ft_printhexaptr(unsigned long long n);
int		ft_hexalenptr(unsigned long nbr);
int		countui(unsigned int n);
char	*ft_itoaui(unsigned int n);

#endif
