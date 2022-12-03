# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aatbir <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/25 20:43:54 by aatbir            #+#    #+#              #
#    Updated: 2022/11/25 22:22:29 by aatbir           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_putchar.c\
   	   ft_putnbr.c\
   	   ft_putnbr_bs.c\
   	   ft_putstr.c\
   	   ft_putunsnbr.c\
	   ft_pointer.c\
   	   ft_printf.c\

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

OBJS = ${SRCS:.c=.o}

%.o : %.c
	${CC} ${CFLAGS} -c $< -o $@

all: ${NAME}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re: fclean all
