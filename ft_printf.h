/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemlal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 15:31:45 by mchemlal          #+#    #+#             */
/*   Updated: 2024/12/21 15:31:52 by mchemlal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(char c);
int	ft_putstr(const char *s);
int	ft_putnbr(int nb);
int	ft_unsigned_putnbr(unsigned int nb);
int	ft_puthex(unsigned int nb, char c);
int	ft_putadr(unsigned long nb);

#endif
