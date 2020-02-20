# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hvuorine <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/25 20:22:48 by hvuorine          #+#    #+#              #
#    Updated: 2020/02/19 16:14:09 by hvuorine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFT = libft.a
LIBFT_PATH = libft/
INCLUDE = ft_printf.h
SRC = ft_printf.c 
OBJ = $(SRC.%.c=%.o)

all: $(NAME)

$(NAME):
	@make -C $(LIBTF_PATH)
	@cp $(LIBFT_PATH) $(LIBFT)
	@mv $(LIBFT) $(NAME)
	@gcc -Wall -Werror -Wextra -I$(INCLUDE) -c $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "Compiled"

clean:
	@rm -f $(OBJ)
	@make -C $(LIBFT_PATH) clean
	@echo "cleaned"

fclean: clean
	@rm -f $(NAME)
	@make -C $(LIBFT_PATH) fclean

re: fclean all

.PHONY: all clean fclean re

