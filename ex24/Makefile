#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dkihn <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/22 14:27:53 by dkihn             #+#    #+#              #
#    Updated: 2018/11/22 14:28:31 by dkihn            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

INCLUDES = includes/
O_FT = ft_putchar.o ft_putstr.o ft_strlen.o ft_swap.o ft_strcmp.o
ALL: $(NAME)
$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRCS) -I $(INCLUDES)
	ar rc $(NAME) $(O_FT)
	ranlib $(NAME)
clean:
	/bin/rm -f $(O_FT)
fclean: clean
	/bin/rm -f $(NAME)
re: fclean ALL
