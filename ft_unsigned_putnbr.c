/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_putnbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemlal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 15:34:32 by mchemlal          #+#    #+#             */
/*   Updated: 2024/12/21 15:34:35 by mchemlal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned_putnbr(unsigned int nb)
{
	int	res;

	res = 0;
	if (nb > 9)
	{
		res += ft_unsigned_putnbr(nb / 10);
		res += ft_unsigned_putnbr(nb % 10);
	}
	else
		res += ft_putchar(nb + '0');
	return (res);
}
