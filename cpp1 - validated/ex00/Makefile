
SRCS	= main.cpp Pony.cpp

OBJS	= $(SRCS:.cpp=.o)

NAME	= pony.out

CLANG	= clang++ -std=c++98 -pedantic-errors

FLAGS	= -Wall -Wextra -Werror

INCLUDE	= none

HEADER	= Pony.hpp




all:	$(NAME)

.PHONY:	clean fclean re bonus bench bclean

$(NAME): $(OBJS) $(HEADER)
	$(CLANG) $(FLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

%.o: %.cpp
	$(CLANG) $(FLAGS) -c $<  -o $(<:.cpp=.o)
