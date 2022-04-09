/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_base.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayumusak <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 23:50:32 by ayumusak          #+#    #+#             */
/*   Updated: 2022/02/12 11:34:36 by ayumusak         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hex_base(unsigned long num, char x, int i)
{
	int	result;

	result = 0;
	if (num >= i)
		result += hex_base(num / i, x, i);
	if (x == 'x')
		result += ft_putchar("0123456789abcdef"[num % i]);
	else if (x == 'X')
		result += ft_putchar("0123456789ABCDEF"[num % i]);
	else if (x == 'p')
		result += ft_putchar("0123456789abcdef"[num % i]);
	return (result);
}
