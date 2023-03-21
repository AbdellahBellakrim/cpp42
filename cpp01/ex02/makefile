# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/21 21:13:39 by abellakr          #+#    #+#              #
#    Updated: 2023/03/21 21:13:41 by abellakr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = HithisisBrain
CC = c++
SRCS = ./main.cpp

OBJS = $(SRCS:.cpp=.o)
	
$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $^ -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	
re: fclean $(NAME)