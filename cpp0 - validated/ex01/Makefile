
SRCS	= main.cpp Contact.class.cpp

OBJS	= $(SRCS:.cpp=.o)

NAME	= CrappyPhoneBook

CLANG	= clang++

FLAGS	= -Wall -Wextra -Werror

INCLUDE	= none

HEADER	= none




all:	$(NAME)

.PHONY:	clean fclean re bonus bench bclean

$(NAME): $(OBJS)
	$(CLANG) $(FLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

%.o: %.cpp
	$(CLANG) $(FLAGS) -c $<  -o $(<:.cpp=.o)
