# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/21 21:13:39 by abellakr          #+#    #+#              #
#    Updated: 2023/03/25 13:55:17 by abellakr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = HithisisBrain
CC = c++
SRCS = ./main.cpp ./Weapon.cpp ./HumanA.cpp ./HumanB.cpp

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