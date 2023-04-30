# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/02 21:47:24 by myagiz            #+#    #+#              #
#    Updated: 2022/12/02 21:47:26 by myagiz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror

SRC = ft_*.c;

OBJ = ft_*.o

all: ${NAME}

${NAME}:
	@gcc ${FLAGS} -c ${SRC}
	@ar -rcs ${NAME} ${OBJ}

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
