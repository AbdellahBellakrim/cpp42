# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/18 19:17:59 by abellakr          #+#    #+#              #
#    Updated: 2023/03/19 12:06:29 by abellakr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = phonebook
CC = c++
SRCS = ./main.cpp ./contact.cpp ./phonebook.cpp

OBJS = $(SRCS:.cpp=.o)
	
$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $^ -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	
re: fclean $(NAME)