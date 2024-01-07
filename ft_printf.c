/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iskartal <iskartal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 00:50:27 by iskartal          #+#    #+#             */
/*   Updated: 2023/08/03 02:05:55 by iskartal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_control(char c, va_list va)
{
	int	sum;

	sum = 0;
	if (c == 'c')
		sum += ft_putchr(va_arg(va, int));
	else if (c == 's')
		sum += ft_putstr(va_arg(va, char *));
	else if (c == 'd' || c == 'i')
		sum += ft_putnbr(va_arg(va, int), 10, 0);
	else if (c == 'u')
		sum += ft_putnbr(va_arg(va, unsigned int), 10, 0);
	else if (c == 'x')
		sum += ft_putnbr(va_arg(va, unsigned int), 16, 0);
	else if (c == 'X')
		sum += ft_putnbr(va_arg(va, unsigned int), 16, 1);
	else if (c == 'p')
		sum += ft_putptr(va_arg(va, unsigned long), 16, 0);
	else
		sum += ft_putchr(c);
	return (sum);
}

int	ft_printf(const char *str, ...)
{
	va_list	va;
	int		sum;

	va_start(va, str);
	sum = 0;
	while (*str)
	{
		if (*str == '%' && *(str + 1) != '\0')
		{
			sum += ft_control(*(str + 1), va);
			str++;
		}
		else if (*str != '%')
			sum += ft_putchr(*str);
		str++;
	}
	va_end(va);
	return (sum);
}
