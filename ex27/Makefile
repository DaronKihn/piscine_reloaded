#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dkihn <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/22 17:08:54 by dkihn             #+#    #+#              #
#    Updated: 2018/11/22 17:15:49 by dkihn            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_display_file

SRC = display_file.c

all : $(NAME)
$(NAME):
	gcc -Wall -Wextra -Werror -Iinclude -o $(NAME) $(SRC)

clean:
	/bin/rm -f *.o
fclean:
	/bin/rm -f $(NAME)
re: fclean all
 