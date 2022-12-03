/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatbir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 16:05:01 by aatbir            #+#    #+#             */
/*   Updated: 2022/11/29 23:43:16 by aatbir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb, int *count)
{
	if (nb == -2147483648)
	{
		ft_putchar('-', count);
		ft_putchar('2', count);
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-', count);
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10, count);
		ft_putnbr(nb % 10, count);
	}
	else
	{
		ft_putchar(nb + '0', count);
	}
}
