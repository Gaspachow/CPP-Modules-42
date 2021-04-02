
SRCS	= main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp Intern.cpp

OBJS	= $(SRCS:.cpp=.o)

NAME	= internship.out

CLANG	= clang++ -std=c++98 -pedantic-errors

FLAGS	= -Wall -Wextra -Werror

INCLUDE	= none

HEADER	= Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp Intern.hpp




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
