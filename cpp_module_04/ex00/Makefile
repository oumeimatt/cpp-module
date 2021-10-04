# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/03 14:46:19 by oel-yous          #+#    #+#              #
#    Updated: 2021/10/04 10:25:18 by oel-yous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = clang++

NAME = a.out

SRCS =	main.cpp \
		Cat.cpp \
		Dog.cpp \
		Animal.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp \


FLAGS =  -Wall -Werror -Wextra -std=c++98

all:		$(NAME)

$(NAME):	$(SRCS)
		$(CC) $(FLAGS) -o $(NAME) $(SRCS)
clean:
			@rm -rf *.o			
fclean: clean
			@rm -rf $(NAME)

re:		fclean all