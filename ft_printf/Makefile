# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/01 11:23:10 by ctommasi          #+#    #+#              #
#    Updated: 2024/10/01 11:23:16 by ctommasi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar crs
LIB_DIR = ../libs

SRCS = ft_printf.c ft_printf_utils.c

OBJS = $(SRCS:.c=.o)

all: $(LIB_DIR)/$(NAME)

$(LIB_DIR)/$(NAME): $(OBJS)
	$(AR) $@ $^
	
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	$(RM) $(OBJS)
	
fclean: clean
	$(RM) $(LIB_DIR)/$(NAME)
	
re: fclean all

.PHONY: all clean fclean re
