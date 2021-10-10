# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/10 11:23:28 by oel-yous          #+#    #+#              #
#    Updated: 2021/10/10 17:22:17 by oel-yous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = clang++

NAME = convert

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