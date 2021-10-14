# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/13 16:24:49 by oel-yous          #+#    #+#              #
#    Updated: 2021/10/13 16:24:51 by oel-yous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

NAME = a.out

SRCS =	main.cpp \

FLAGS =  -Wall -Werror -Wextra

all:		$(NAME)

$(NAME):	$(SRCS)
		$(CC) $(FLAGS) -o $(NAME) $(SRCS)
clean:
			@rm -rf *.o			
fclean: clean
			@rm -rf $(NAME)

re:		fclean all