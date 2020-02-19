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

NAME=libftprintf.a

SRCS= main.c printf.c

OBJECTS= main.o printf.o

INCLUDES= libftprintf.h

all: $(NAME)

$(NAME): $(SRCS) libftprintf.h
	@gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $(TSTSRCS)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)
	@echo "Library compiled"

clean:
	@/bin/rm -f $(OBJECTS)
	@echo "Cleaned!"
fclean: clean
	@/bin/rm -f $(NAME)

pf:	 
	@gcc main.c -I$(INCLUDES)  $(TSTSRCS) -L /Users/hvuorine/Desktop/42/printf -libftprintf.a

re: fclean all
