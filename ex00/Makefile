# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahillary <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/21 22:15:55 by ahillary          #+#    #+#              #
#    Updated: 2019/07/21 22:35:53 by ahillary         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

FLAGS = -Wall -Wextra -Werror

H_FILES = stack.h

SRC = main.c count.c eval_foo.c print_foo.c stack_char.c stack.c eval_expr.c

OBJECTS = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC)
	gcc $(FLAGS) $(OBJECTS) -o $(NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
