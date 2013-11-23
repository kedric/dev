#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmancero <jmancero@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/20 17:04:18 by jmancero          #+#    #+#              #
#    Updated: 2013/11/20 20:48:21 by jmancero         ###   ########.fr        #
#                                                                              #
#******************************************************************************#
NAME = libft.a

SOURCE = 	ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_putchar.c \
			ft_putnbr.c \
			ft_putstr.c \
			ft_strcmp.c \
			ft_strcpy.c \
			ft_strlen.c \
			ft_strncpy.c \
			ft_strncmp.c \
			ft_tolower.c \
			ft_toupper.c \

OBJ =	$(SOURCE:.c=.o) 

all : $(NAME)

$(NAME): 
	gcc -c $(SOURCE)
	ar rc $(NAME) $(OBJ)

clean : 
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
