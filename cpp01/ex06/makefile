# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/23 13:38:03 by abellakr          #+#    #+#              #
#    Updated: 2023/03/25 13:57:07 by abellakr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = harlFilter
CC = c++
SRCS = ./main.cpp ./Harl.cpp

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