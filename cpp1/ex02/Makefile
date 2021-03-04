
SRCS	= main.cpp Zombie.cpp ZombieEvent.cpp

OBJS	= $(SRCS:.cpp=.o)

NAME	= zombie.out

CLANG	= clang++

FLAGS	= -Wall -Wextra -Werror

INCLUDE	= none

HEADER	= Zombie.hpp ZombieEvent.hpp




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
