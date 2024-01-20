# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/14 08:22:32 by afarheen          #+#    #+#              #
#    Updated: 2023/10/31 11:11:30 by afarheen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixedpoint

MY_SOURCES = main.cpp Fixed.cpp

MY_OBJS = $(MY_SOURCES:.cpp=.o)

CXXFLAGS =  -Wall -Wextra -Werror -std=c++98

CXX = c++

all: $(NAME)

$(NAME): $(MY_OBJS)
	$(CXX) $(CXXFLAGS) $(MY_SOURCES) -o $(NAME)

clean:
	rm -f $(MY_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
