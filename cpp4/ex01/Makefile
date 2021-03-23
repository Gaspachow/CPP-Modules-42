
SRCS	= main.cpp AWeapon.cpp Character.cpp Enemy.cpp PlasmaRifle.cpp PowerFist.cpp RadScorpion.cpp SuperMutant.cpp SuperChicken.cpp MiniNuke.cpp

OBJS	= $(SRCS:.cpp=.o)

NAME	= fallout.out

CLANG	= clang++ -std=c++98 -pedantic-errors

FLAGS	= -Wall -Wextra -Werror

INCLUDE	= none

HEADER	= AWeapon.hpp Character.hpp Enemy.hpp PlasmaRifle.hpp PowerFist.hpp RadScorpion.hpp SuperMutant.hpp SuperChicken.hpp MiniNuke.hpp




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
