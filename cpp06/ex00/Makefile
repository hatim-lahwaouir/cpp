NAME = convert
SRCS = ScalarConverte.cpp  parsing.cpp
OBJS = ${SRCS:%.cpp=%.o}
CC = c++  -fsanitize=address
FLAGS = -Wall -Wextra -Werror
STD = -std=c++98
INCLUDE = ScalarConverte.hpp 

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