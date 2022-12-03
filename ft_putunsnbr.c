/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatbir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:59:17 by aatbir            #+#    #+#             */
/*   Updated: 2022/11/28 18:21:55 by aatbir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsnbr(unsigned int nb, int *count)
{
	if (nb > 9)
	{
		ft_putunsnbr(nb / 10, count);
		ft_putunsnbr(nb % 10, count);
	}
	else
		ft_putchar(nb + '0', count);
}
