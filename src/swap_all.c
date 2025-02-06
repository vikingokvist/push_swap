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

static void	selection_sort(t_list **stack_a, t_list **stack_b)
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

static void	bucket_sort(t_list **stack_a, t_list **stack_b, int s_len)
{
	int	i;
	int	range;

	i = 0;
	range = (int)ft_sqrt(s_len);
	while (*stack_a)
	{
		if ((*stack_a)->index <= i)
		{
			pb(stack_a, stack_b);
			if (ft_lstlen(stack_b) > 1)
				rb(stack_b);
			i++;
		}
		else if ((*stack_a)->index <= (i + range))
		{
			pb(stack_a, stack_b);
			i++;
		}
		else
			ra(stack_a);
	}
}

void	swap_all(t_list **stack_a, t_list **stack_b)
{
	bucket_sort(stack_a, stack_b, ft_lstlen(stack_a));
	while (*stack_b)
		selection_sort(stack_a, stack_b);
}
