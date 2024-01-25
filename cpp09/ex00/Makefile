NAME = btc
SRCS =  BitcoinExchange.cpp BtcException.cpp    main.cpp trim.cpp
OBJS = $(addprefix obj/,${SRCS:%.cpp=%.o})
CC = c++
FLAGS = -Wall -Wextra -Werror
STD = -std=c++98
INCLUDE = BitcoinExchange.hpp BtcException.hpp
OBJDIR = obj
all : $(OBJDIR) $(NAME)

.PHONY : megaphone clean fclean re

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(STD) $(OBJS) -o $(NAME)

$(OBJDIR) :
	mkdir $@

$(OBJDIR)/%.o: %.cpp $(INCLUDE)
	$(CC) -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean :
	rm -rf $(OBJS)
fclean: clean
	rm -rf $(NAME)


re : fclean all