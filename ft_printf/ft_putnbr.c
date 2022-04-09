/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayumusak <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 12:00:35 by ayumusak          #+#    #+#             */
/*   Updated: 2022/02/08 12:59:42 by ayumusak         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int c)
{
	int	len;

	len = 0;
	if (c == -2147483648)
		return (ft_putstr("-2147483648"));
	if (c < 0)
	{
		len += ft_putchar('-');
		len += ft_putnbr(-c);
	}
	else if (c >= 10)
	{
		len += ft_putnbr(c / 10);
		len += ft_putchar(c % 10 + '0');
	}	
	else
		len += ft_putchar(c + '0');
	return (len);
}
