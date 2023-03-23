# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/23 13:38:03 by abellakr          #+#    #+#              #
#    Updated: 2023/03/23 13:48:39 by abellakr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = harlFilter
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