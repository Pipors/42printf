/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatbir <aatbir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 22:35:19 by aatbir            #+#    #+#             */
/*   Updated: 2023/01/05 14:00:51 by aatbir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_conversion(va_list arg, const char *str, int *count)
{
	if (*str == '%')
		ft_putchar(*str, count);
	else if (*str == 'c')
		ft_putchar(va_arg(arg, int), count);
	else if (*str == 'd' || *str == 'i')
		ft_putnbr(va_arg(arg, int), count);
	else if (*str == 's')
		ft_putstr(va_arg(arg, char *), count);
	else if (*str == 'u')
		ft_putunsnbr(va_arg(arg, unsigned int), count);
	else if (*str == 'x')
		ft_putnbr_bs(va_arg(arg, unsigned int), 0, count);
	else if (*str == 'X')
		ft_putnbr_bs(va_arg(arg, unsigned int), 1, count);
	else if (*str == 'p')
		ft_pointer(va_arg(arg, unsigned long *), count);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	arg;

	i = 0;
	count = 0;
	va_start(arg, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			check_conversion(arg, &str[i], &count);
		}
		else
			ft_putchar(str[i], &count);
		i++;
	}
	return (count);
	va_end(arg);
}

/*int main()
{
	ft_printf("anas");
}*/
