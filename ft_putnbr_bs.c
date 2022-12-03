/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_bs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatbir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:00:42 by aatbir            #+#    #+#             */
/*   Updated: 2022/11/29 12:51:08 by aatbir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_bs(unsigned int nb, int upper, int *count)
{
	char	*base;

	if (upper)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (nb >= 0 && nb < 16)
		ft_putchar(base[nb], count);
	else
	{
		ft_putnbr_bs((nb / 16), upper, count);
		ft_putnbr_bs((nb % 16), upper, count);
	}
}
