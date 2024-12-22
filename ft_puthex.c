/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemlal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 15:33:12 by mchemlal          #+#    #+#             */
/*   Updated: 2024/12/21 15:33:15 by mchemlal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int nb, char c)
{
	int		res;
	char	*base;

	res = 0;
	if (c == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (nb >= 16)
	{
		res += ft_puthex(nb / 16, c);
		res += ft_puthex(nb % 16, c);
	}
	else
		res += ft_putchar(base[nb % 16]);
	return (res);
}
