CC = clang++

NAME = Phonebook

SRCS =	main.cpp \
		Contact.Class.cpp \
		Phonebook.Class.cpp \

FLAGS =  -Wall -Werror -Wextra -std=c++98

all:		$(NAME)

$(NAME):	$(SRCS)
		$(CC) $(FLAGS) -o $(NAME) $(SRCS)
clean:
			@rm -rf *.o			
fclean: clean
			@rm -rf $(NAME)

re:		fclean all
