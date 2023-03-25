# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/24 17:15:23 by abellakr          #+#    #+#              #
#    Updated: 2023/03/25 13:49:19 by abellakr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXXFLAGS = -std=c++98 -Wall -Wextra -Werror


NAME = megaphone
CC = c++
SRCS = ./megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp
	$(CC) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	
re: fclean $(NAME)
