# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/11 20:10:18 by abellakr          #+#    #+#              #
#    Updated: 2023/04/14 22:13:21 by abellakr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXXFLAGS = -std=c++98 -Wall -Wextra -Werror -g

NAME = PmergeMe
CC = c++
SRCS = ./main.cpp ./PmergeMe.cpp

OBJS = $(SRCS:.cpp=.o)
	
%.o: %.cpp *.hpp
	$(CC) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CXXFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	
re: fclean $(NAME)