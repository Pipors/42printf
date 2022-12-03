/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatbir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 00:04:05 by aatbir            #+#    #+#             */
/*   Updated: 2022/11/29 23:00:22 by aatbir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbrp_bs(unsigned long int nb, int upper, int *count)
{
	char	*base;

	upper = 0;
	if (upper)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (nb >= 0 && nb < 16)
		ft_putchar(base[nb], count);
	else
	{
		ft_putnbrp_bs(nb / 16, upper, count);
		ft_putnbrp_bs(nb % 16, upper, count);
	}
}

void	ft_pointer(void *ptr, int *count)
{
	unsigned long	p;

	p = (unsigned long )ptr;
	ft_putstr("0x", count);
	ft_putnbrp_bs(p, 0, count);
}
