/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:18:35 by ctommasi          #+#    #+#             */
/*   Updated: 2024/10/28 10:18:37 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "ft_printf.h"
# include <stdlib.h>

//struct
typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
	struct s_list	*prev;
}	t_list;

//src/main.c
int		main(int argc, char *argv[]);
void	push_swap(t_list **stack_a, t_list **stack_b);
void	swap_three(t_list **stack_x);
void	swap_five(t_list **stack_a, t_list **stack_b);
void	swap_all(t_list **stack_a, t_list **stack_b);

//src/init_stack
int		init_stack(t_list **stack, int argc, char **argv);
int		check_digit(char **temp, int j);
int		check_dupe(t_list **stack_a);
int		check_order(t_list **stack_a);

//src/swap.c
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	ss(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_b, t_list **stack_a);
void	pb(t_list **stack_a, t_list **stack_b);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);

//src/lens.c
size_t	ft_strlen(const char *s);
size_t	array_len(char const *s, char c);
size_t	word_len(char const *s, char c, size_t start);
size_t	stack_len(t_list **stack_x);

//src/frees.c
void	free_all(char **res, size_t i);
void	stack_free(t_list **stack);

//utils
int		ft_isdigit(int c);
int		ft_sqrt(int nb);
long	ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstinit_index(t_list **stack_x);
t_list	*ft_lstnew(int value);
t_list	*ft_lstmax_index(t_list **stack_x);
t_list	*ft_lstlast(t_list **stack_x);

//utils/(DELETE AFTERWARDS)
void	ft_lstprint(t_list **stack_a, t_list **stack_b);

#endif
