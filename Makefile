# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/28 10:18:47 by ctommasi          #+#    #+#              #
#    Updated: 2024/10/28 10:18:49 by ctommasi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

INCLUDE_DIR = includes
FTPRINTF_DIR = ft_printf
LIB_DIR = libs

SRCS_SRC = src/checks.c src/frees.c src/init_stack.c src/lens.c src/main.c \
	src/swap.c src/push.c src/rotate.c src/reverse_rotate.c \
	src/push_swap.c src/swap_three.c src/swap_five.c src/swap_all.c

SRCS_UTILS = utils/ft_atoi.c utils/ft_isdigit.c utils/ft_lstadd_back.c utils/ft_split.c \
	utils/ft_lstnew.c utils/ft_lstindex.c \
	utils/ft_lstprint.c

OBJS_SRC = $(SRCS_SRC:.c=.o)
OBJS_UTILS = $(SRCS_UTILS:.c=.o)

FTPRINTF = $(LIB_DIR)/libftprintf.a

all: $(FTPRINTF) $(NAME)

$(NAME): $(OBJS_UTILS) $(OBJS_SRC) $(FTPRINTF)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS_UTILS) $(OBJS_SRC) $(FTPRINTF)

%.o: %.c
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

$(FTPRINTF):
	$(MAKE) -C $(FTPRINTF_DIR)

clean:
	$(RM) $(OBJS_SRC) $(OBJS_UTILS)
	$(MAKE) clean -C $(FTPRINTF_DIR)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(FTPRINTF)

re: fclean all

.PHONY: all clean fclean re
