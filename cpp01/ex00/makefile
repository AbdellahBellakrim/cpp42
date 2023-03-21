# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/21 19:23:41 by abellakr          #+#    #+#              #
#    Updated: 2023/03/21 19:23:42 by abellakr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = Zombie
CC = c++
SRCS = ./main.cpp ./newZombie.cpp ./randomChump.cpp ./Zombie.cpp

OBJS = $(SRCS:.cpp=.o)
	
$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $^ -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	
re: fclean $(NAME)