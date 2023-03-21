CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = Moar
CC = c++
SRCS = ./main.cpp ./Zombie.cpp ./zombieHorde.cpp 

OBJS = $(SRCS:.cpp=.o)
	
$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $^ -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	
re: fclean $(NAME)