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
BONUS_NAME = checker

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

INCLUDE_DIR = includes

SRCS_SRC = src/push_swap.c src/swap_three.c src/swap_five.c src/swap_all.c \
	src/reverse_rotate.c src/rotate.c src/swap.c src/push.c src/main.c

SRCS_MAIN = src/main.c

SRCS_UTILS = utils/ft_lstfree.c utils/ft_lstinit_index.c utils/ft_lstlast.c utils/ft_lstlen.c \
	utils/ft_lstmax_index.c utils/ft_sqrt.c \

SRCS_SHARED = utils/ft_strcmp.c utils/ft_lstnew.c utils/ft_lst_isordered.c src/init_stack.c \
	utils/ft_atoi.c utils/ft_lstadd_back.c utils/ft_lstcheck_dupe.c utils/ft_check_valid_digits.c \
	utils/ft_isdigit.c utils/ft_split.c

SRCS_BONUS = bonus/checker.c \
	bonus/get_next_line.c bonus/get_next_line_utils.c \
	bonus/swap_bonus.c bonus/rotate_bonus.c bonus/reverse_rotate_bonus.c \
	bonus/push_bonus.c bonus/ft_lstfree2.c

OBJS_SRC = $(SRCS_SRC:.c=.o)
OBJS_UTILS = $(SRCS_UTILS:.c=.o)
OBJS_MAIN = $(SRCS_MAIN:.c=.o)
OBJS_SHARED = $(SRCS_SHARED:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS_UTILS) $(OBJS_SRC) $(OBJS_SHARED)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS_UTILS) $(OBJS_SRC) $(OBJS_SHARED)

$(BONUS_NAME): $(OBJS_BONUS) $(OBJS_SHARED)
	$(CC) $(CFLAGS) -o $(BONUS_NAME) $(OBJS_BONUS) $(OBJS_SHARED)

%.o: %.c
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

bonus: $(BONUS_NAME)

clean:
	$(RM) $(OBJS_SRC) $(OBJS_UTILS) $(OBJS_BONUS) $(OBJS_SHARED)

fclean: clean
	$(RM) $(NAME) $(BONUS_NAME)

re: fclean all

.PHONY: all clean fclean re bonus
