# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/24 00:44:03 by abellakr          #+#    #+#              #
#    Updated: 2023/03/24 00:44:04 by abellakr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = a.out
CC = c++
SRCS = ./main.cpp ./Fixed.cpp

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