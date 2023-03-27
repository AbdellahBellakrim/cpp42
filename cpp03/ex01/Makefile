# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/26 16:47:50 by abellakr          #+#    #+#              #
#    Updated: 2023/03/26 18:11:22 by abellakr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = a.out
CC = c++
SRCS = ./main.cpp ./ClapTrap.cpp ./ScavTrap.cpp

OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp *.hpp
	$(CC) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	
re: fclean $(NAME)