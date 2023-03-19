CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = job
CC = c++
SRCS = ./tests.cpp ./Account.cpp 

OBJS = $(SRCS:.cpp=.o)
	
$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $^ -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	
re: fclean $(NAME)