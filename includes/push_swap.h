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
# include <unistd.h>

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
int		init_stack(t_list **stack, int argc, char **argv);
void	push_swap(t_list **stack_a, t_list **stack_b);
void	swap_three(t_list **stack_x);
void	swap_five(t_list **stack_a, t_list **stack_b);
void	swap_all(t_list **stack_a, t_list **stack_b);

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

//utils
int		ft_check_valid_digits(char **temp, int j);
int		ft_isdigit(int c);
int		ft_sqrt(int nb);
int		ft_lstcheck_dupe(t_list **stack_x);
int		ft_lst_isordered(t_list **stack_x);
long	ft_atoi(const char *str);
size_t	ft_lstlen(t_list **stack_x);
t_list	*ft_lstnew(int value);
t_list	*ft_lstmax_index(t_list **stack_x);
t_list	*ft_lstlast(t_list **stack_x);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstinit_index(t_list **stack_x);
void	ft_lstfree(t_list **stack_x);
void	free_all(char **res, size_t i);
char	**ft_split(char const *s, char c);
size_t	array_len(char const *s, char c);


//utils/(DELETE AFTERWARDS)
void	ft_lstprint(t_list **stack_a, t_list **stack_b);

#endif
