NAME = ex02
SRCS = AForm.cpp Bureaucrat.cpp ExceptionClasses.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp main.cpp
OBJS = ${SRCS:%.cpp=%.o}
CC = c++
FLAGS = -Wall -Wextra -Werror
STD = -std=c++98
INCLUDE = AForm.hpp Bureaucrat.hpp ExceptionClasses.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp

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