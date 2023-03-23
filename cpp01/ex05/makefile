# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/23 10:45:17 by abellakr          #+#    #+#              #
#    Updated: 2023/03/23 11:56:13 by abellakr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = Harl
CC = c++
SRCS = ./main.cpp ./Harl.cpp

OBJS = $(SRCS:.cpp=.o)
	
$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $^ -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	
re: fclean $(NAME)