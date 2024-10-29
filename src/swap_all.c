/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:16:08 by ctommasi          #+#    #+#             */
/*   Updated: 2024/10/28 10:16:10 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	moves(t_list **stack_b, int count, int r_count)
{
	int	i;

	i = 0;
	if (count <= r_count)
	{
		while (i < count)
		{
			rb(stack_b);
			i++;
		}
	}
	else if (count > r_count)
	{
		while (i < r_count)
		{
			rrb(stack_b);
			i++;
		}
		rrb(stack_b);
	}
}

static void	quick_sort(t_list **stack_a, t_list **stack_b)
{
	t_list	*head;
	t_list	*tail;
	t_list	*pivot;
	int		count;
	int		r_count;

	head = *stack_b;
	tail = ft_lstlast(stack_b);
	pivot = ft_lstmax_index(stack_b);
	count = 0;
	r_count = 0;
	while (head->index != pivot->index)
	{
		head = head->next;
		count++;
	}
	while (tail->index != pivot->index)
	{
		tail = tail->prev;
		r_count++;
	}
	moves(stack_b, count, r_count);
	pa(stack_b, stack_a);
}

void	swap_all(t_list **stack_a, t_list **stack_b)
{
	while (*stack_a)
		pb(stack_a, stack_b);
	while (*stack_b)
		quick_sort(stack_a, stack_b);
}
