/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayumusak <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 09:12:32 by ayumusak          #+#    #+#             */
/*   Updated: 2022/02/12 11:27:18 by ayumusak         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_section(va_list *argv, char str)
{
	int	result;

	result = 0;
	if (str == 'c')
		result += ft_putchar(va_arg(*argv, int));
	else if (str == 's')
		result += ft_putstr(va_arg(*argv, char *));
	else if (str == 'i' || str == 'd')
		result += ft_putnbr(va_arg(*argv, int));
	else if (str == 'x' || str == 'X')
		result += hex_base(va_arg(*argv, unsigned int), str, 16);
	else if (str == '%')
		result += ft_putchar('%');
	else if (str == 'u')
		result += hex_base(va_arg(*argv, unsigned int), 'x', 10);
	else if (str == 'p')
	{
		result += write(1, "0x", 2);
		result += hex_base(va_arg(*argv, unsigned long), 'p', 16);
	}
	return (result);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		result;
	va_list	arg;

	va_start(arg, str);
	i = 0;
	result = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			result += ft_section(&arg, str[++i]);
		}
		else
			result += write(1, &str[i], 1);
		i++;
	}
	return (result);
}
