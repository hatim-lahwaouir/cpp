NAME = a.out
SRCS = ClapTrap.cpp main.cpp  çç
OBJS = ${SRCS:%.cpp=%.o}
CC = c++
FLAGS = -Wall -Wextra -Werror
STD = -std=c++98
INCLUDE = ClapTrap.hpp FragTrap.hpp

all : $(NAME)

.PHONY : clean fclean re

$(NAME) : $(OBJS) 
	$(CC) $(FLAGS) $(STD) $(OBJS) -o $(NAME)

%.o: %.cpp $(INCLUDE)
	$(CC) $(FLAGS) $(STD) -c $< -o $@

clean :
	rm -rf $(OBJS)
fclean: clean
	rm -rf $(NAME)
re : fclean all