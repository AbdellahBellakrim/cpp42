# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/24 17:17:14 by abellakr          #+#    #+#              #
#    Updated: 2023/03/24 17:18:38 by abellakr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CXXFLAGS = -std=c++98 -Wall -Wextra -Werror


NAME = job
CC = c++
SRCS = ./tests.cpp ./Account.cpp 

OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp Fixed.hpp
	$(CC) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CXXFLAGS) $(OBJS) -o $(NAME)
	
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	
re: fclean $(NAME)
