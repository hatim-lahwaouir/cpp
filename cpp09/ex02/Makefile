NAME = PmergeMe
SRCS =  main.cpp JacobsthalNumberGenerator.cpp PmergeMe.cpp
OBJS = $(addprefix obj/,${SRCS:%.cpp=%.o})
CC = c++
FLAGS = -Wall -Wextra -Werror -fsanitize=address
STD = -std=c++98
INCLUDE = JacobsthalNumberGenerator.hpp PmergeMe.hpp
OBJDIR = obj
all : $(OBJDIR) $(NAME)

.PHONY : megaphone clean fclean re

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(STD) $(OBJS) -o $(NAME)

$(OBJDIR)/%.o: %.cpp $(INCLUDE)
	$(CC) -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean :
	rm -rf $(OBJS)
fclean: clean
	rm -rf $(NAME)

re : fclean all

$(OBJDIR) :
	mkdir $@