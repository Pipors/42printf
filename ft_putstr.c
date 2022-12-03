/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatbir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 20:24:43 by aatbir            #+#    #+#             */
/*   Updated: 2022/11/29 23:39:05 by aatbir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int *count)
{
	int	i;

	i = 0;
	if (s == NULL)
		ft_putstr("(null)", count);
	else
	{
		while (s[i] && s)
		{
			ft_putchar(s[i], count);
			i++;
		}
	}
}
