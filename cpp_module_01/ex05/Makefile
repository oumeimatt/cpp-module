# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/24 15:36:48 by oel-yous          #+#    #+#              #
#    Updated: 2021/09/24 15:37:42 by oel-yous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

NAME = Karen

SRCS =	main.cpp \
		Karen.cpp \

FLAGS =  -Wall -Werror -Wextra -std=c++98

all:		$(NAME)

$(NAME):	$(SRCS)
		$(CC) $(FLAGS) -o $(NAME) $(SRCS)
clean:
			@rm -rf *.o			
fclean: clean
			@rm -rf $(NAME)

re:		fclean all