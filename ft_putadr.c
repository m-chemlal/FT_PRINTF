/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemlal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 17:58:08 by mchemlal          #+#    #+#             */
/*   Updated: 2024/12/21 18:14:59 by mchemlal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putadr(unsigned long nb)
{
	unsigned long	n;
	int				res;
	char			*base;

	n = nb;
	if (nb == 0)
	{
		ft_putstr("(nil)");
		return (5);
	}
	res = 0;
	base = "0123456789abcdef";
	if (n >= 16)
	{
		res += ft_putadr(n / 16);
		res += ft_putchar(base[n % 16]);
	}
	else
		res += ft_putchar(base[n]);
	return (res);
}
