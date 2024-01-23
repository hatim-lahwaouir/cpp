NAME = RPN
SRCS =  main.cpp RPN.cpp
OBJS = $(addprefix obj/,${SRCS:%.cpp=%.o})
CC = c++
FLAGS = -Wall -Wextra -Werror
STD = -std=c++98
INCLUDE = RPN.hpp
OBJDIR = obj
all : $(NAME)

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