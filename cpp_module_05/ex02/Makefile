# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/07 14:48:02 by oel-yous          #+#    #+#              #
#    Updated: 2021/10/08 12:36:20 by oel-yous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

NAME = a.out

SRCS =	main.cpp \
		Bureaucrat.cpp \
		Form.cpp \
		PresidentialPardonForm.cpp \
		RobotomyRequestForm.cpp \
		ShrubberyCreationForm.cpp \

FLAGS =  -Wall -Werror -Wextra 

all:		$(NAME)

$(NAME):	$(SRCS)
		$(CC) $(FLAGS) -o $(NAME) $(SRCS)
clean:
			@rm -rf *.o
			@rm -rf *_shrubbery	
fclean: clean
			@rm -rf $(NAME)

re:		fclean all