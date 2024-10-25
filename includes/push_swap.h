/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:06:02 by ctommasi          #+#    #+#             */
/*   Updated: 2024/10/17 15:06:04 by ctommasi         ###   ########.fr       */
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
}	t_list;

//src/main.c
int		main(int argc, char *argv[]);
int		ft_push_swap(t_list **stack_a, t_list **stack_b);
int		ft_swap_three(t_list **stack_x);
void	ft_swap_five(t_list **stack_a, t_list **stack_b);

//src/init_stack
int		ft_init_stack(t_list **stack, int argc, char **argv);

//src/checks.s
int		ft_check_digit(char **temp, int j);
int		ft_check_dupe(t_list **stack_a);
int		ft_check_order(t_list **stack_a);

//src/swap.c
void	ft_sa(t_list **stack_a);
void	ft_sb(t_list **stack_b);
void	ft_ss(t_list **stack_a, t_list **stack_b);

//src/push.c
void	ft_pa(t_list **stack_b, t_list **stack_a);
void	ft_pb(t_list **stack_a, t_list **stack_b);

//src/rotate.c
void	ft_ra(t_list **stack_a);
void	ft_rb(t_list **stack_b);
void	ft_rr(t_list **stack_a, t_list **stack_b);

//src/reverse_rotate.c
void	ft_rra(t_list **stack_a);
void	ft_rrb(t_list **stack_b);
void	ft_rrr(t_list **stack_a, t_list **stack_b);

//src/lens.c
size_t	ft_strlen(const char *s);
size_t	ft_array_len(char const *s, char c);
size_t	ft_word_len(char const *s, char c, size_t start);
size_t	ft_lstlen(t_list **stack_x);

//src/frees.c
void	ft_free_all(char **res, size_t i);
void	ft_lstfree(t_list **stack);

//utils
int		ft_isdigit(int c);
long	ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
t_list	*ft_lstnew(int value);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstindex(t_list **stack_a);

//utils/(DELETE AFTERWARDS)
void	ft_lstprint(t_list **stack_a, t_list **stack_b);

#endif