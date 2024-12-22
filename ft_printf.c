/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemlal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 17:42:19 by mchemlal          #+#    #+#             */
/*   Updated: 2024/12/21 17:50:38 by mchemlal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check(va_list args, char c, int res)
{
	unsigned long	add;

	res = 0;
	if (c == 'd' || c == 'i')
		res = ft_putnbr(va_arg(args, int));
	else if (c == 's')
		res = ft_putstr(va_arg(args, char *));
	else if (c == 'c')
		res = ft_putchar(va_arg(args, int));
	else if (c == 'u')
		res = ft_unsigned_putnbr(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		res = ft_puthex(va_arg(args, int), c);
	else if (c == 'p')
	{
		add = va_arg(args, unsigned long);
		if (add)
			res = ft_putstr("0x");
		res += ft_putadr(add);
	}
	else if (c == '%')
		res = ft_putchar('%');
	else
		res = ft_putchar(c);
	return (res);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		res;

	va_start(args, str);
	i = 0;
	res = 0;
	if (write(1, "", 0) == -1)
		return (-1);
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == '\0')
				break ;
			res += ft_check(args, str[++i], res);
		}
		else
			res += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (res);
}
