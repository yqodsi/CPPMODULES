NAME		=	megaphone

CC			=	clang++

CFLAGS		=	-Wall -Wextra -Werror 

SRCS		= 	megaphone.cpp

OBJ			=	$(SRCS:.cpp=.o)

%.o : %.cpp
	$(CC) $(CFLAGS)	 -c $< -o $@

all: 
	@$(MAKE) $(NAME) --no-print-directory

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all