NAME = violence
SRCS = HumanA.cpp HumanB.cpp Weapon.cpp main.cpp
OBJS = ${SRCS:%.cpp=%.o}
CC = c++
FLAGS = -Wall -Wextra -Werror
STD = -std=c++98
INCLUDE = HumanA.hpp HumanB.hpp Violence.hpp Weapon.hpp

all : $(NAME)

.PHONY : clean fclean re

$(NAME) : $(OBJS) 
	$(CC) $(FLAGS) $(STD) $(OBJS) -o $(NAME)

%.o: %.cpp $(INCLUDE)
	$(CC) -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean :
	rm -rf $(OBJS)
fclean: clean
	rm -rf $(NAME)
re : fclean all