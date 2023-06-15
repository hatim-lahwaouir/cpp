NAME = PhoneBook
SRCS = ContactsMethods.cpp PhoneBook.cpp PhoneBook_addAction.cpp PhoneBook_searchAction.cpp
OBJS = ${SRCS:%.cpp=%.o}
CC = c++
FLAGS = -Wall -Wextra -Werror
STD = -std=c++98

all : $(NAME)

.PHONY : clean fclean re

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(STD) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean :
	rm -rf $(OBJS)
fclean: clean
	rm -rf $(NAME)
re : fclean all