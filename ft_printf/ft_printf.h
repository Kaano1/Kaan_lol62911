/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayumusak <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 10:05:16 by ayumusak          #+#    #+#             */
/*   Updated: 2022/02/12 11:28:03 by ayumusak         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_putstr(char *str);
int		ft_putchar(char s);
int		ft_putnbr(int num);
int		ft_printf(const char *str, ...);
int		hex_base(unsigned long num, char x, int i);

#endif
