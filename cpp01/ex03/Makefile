NAME = violence
SRCS = main.cpp
OBJS = ${SRCS:%.cpp=%.o}
CC = c++
FLAGS = -Wall -Wextra -Werror
STD = -std=c++98
INCLUDE =

all : $(NAME)

.PHONY : violence clean fclean re

$(NAME) : $(OBJS) $(INCLUDE)
	$(CC) $(FLAGS) $(STD) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean :
	rm -rf $(OBJS)
fclean: clean
	rm -rf $(NAME)
re : fclean all