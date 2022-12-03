/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatbir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 20:07:49 by aatbir            #+#    #+#             */
/*   Updated: 2022/11/29 23:02:41 by aatbir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdio.h>
# include<stdlib.h>
# include<stdarg.h>
# include<unistd.h>

int		ft_printf(const char *str, ...);
void	ft_putchar(char c, int *count);
void	ft_putstr(char *s, int *count);
void	ft_putnbr(int nb, int *count);
void	ft_putunsnbr(unsigned int nb, int *count);
void	ft_putnbr_bs(unsigned int nb, int upper, int *count);
void	ft_pointer(void *ptr, int *count);

#endif
