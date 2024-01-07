/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iskartal <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 20:57:49 by iskartal          #+#    #+#             */
/*   Updated: 2023/07/24 20:58:01 by iskartal         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

# ifndef LOWER_BASE
#  define LOWER_BASE "0123456789abcdef"
# endif

# ifndef UPPER_BASE
#  define UPPER_BASE "0123456789ABCDEF"
# endif

int	ft_printf(const char *str, ...);
int	ft_control(char c, va_list va);
int	ft_putchr(char c);
int	ft_putstr(char *str);
int	ft_putnbr(long double nbr, int base, int is_upper);
int	ft_putptr(long double nbr, int base, int is_upper);

#endif
