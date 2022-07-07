# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/06 17:01:39 by vfiszbin          #+#    #+#              #
#    Updated: 2022/07/06 17:08:12 by vfiszbin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRCS =	megaphone.cpp\

OBJS = ${SRCS:.cpp=.o}

INCLUDES =

CC = c++

RM = rm -f

FLAGS = -Wall -Wextra -Werror -std=c++98

LIBS =

.cpp.o: ${INCLUDES}
	${CC} ${FLAGS} -c $ $< -o ${<:.cpp=.o}

all: ${NAME}

${NAME} : ${OBJS}
	
	${CC} ${FLAGS} ${OBJS} -o ${NAME} ${LIBS}

clean:
	${RM} *.o

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re