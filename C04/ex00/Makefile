NAME = Animal

SRCS		=   main.cpp Animal.cpp  Dog.cpp Cat.cpp WrongCat.cpp WrongAnimal.cpp 
HEADERS 	= 	Animal.hpp Dog.hpp Cat.hpp WrongCat.hpp WrongAnimal.hpp 
CC			= clang++

CPP_FLAGS	= -Wall -Wextra -Werror -std=c++98

OBJS		= $(SRCS:%.cpp=%.o)

RM			= rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)


%.o: %.cpp $(HEADERS)
	$(CC) -c $(CPP_FLAGS) $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

test: all
	@clear
	@./${NAME}
.PHONY: all clean fclean re