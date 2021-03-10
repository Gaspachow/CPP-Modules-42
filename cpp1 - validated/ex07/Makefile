
SRCS	= main.cpp

OBJS	= $(SRCS:.cpp=.o)

NAME	= replace

CLANG	= clang++ -std=c++98 -pedantic-errors

FLAGS	= -Wall -Wextra -Werror

INCLUDE	= none

HEADER	= main.hpp




all:	$(NAME)

.PHONY:	clean fclean re bonus bench bclean

$(NAME): $(OBJS)
	$(CLANG) $(FLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

%.o: %.cpp $(HEADER)
	$(CLANG) $(FLAGS) -c $<  -o $(<:.cpp=.o)
