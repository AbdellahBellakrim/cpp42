# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/22 13:26:58 by abellakr          #+#    #+#              #
#    Updated: 2023/03/22 17:45:35 by abellakr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = SedisforLosers
CC = c++
SRCS = ./main.cpp ./files.cpp

OBJS = $(SRCS:.cpp=.o)
	
$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $^ -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	
re: fclean $(NAME)