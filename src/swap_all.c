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

static void	pb_by_chunks(t_list **stack_a, t_list **stack_b, int s_len, int k)
{
	t_list	*last;
	int		end_index;
	int		start_index;
	int		chunk_i;
	int		chunk_j;

	chunk_i = 0;
	while (chunk_i < s_len / k)
	{
		start_index = s_len - (chunk_i + 1) * k;
		end_index = s_len - chunk_i * k;
		chunk_j = 0;
		while (chunk_j < k)
		{
			last = ft_lstlast(stack_a);
			if ((*stack_a)->index >= start_index && (*stack_a)->index < end_index)
			{
				pb(stack_a, stack_b);
				chunk_j++;
			}
			else if (last->index >= start_index && last->index < end_index)
			{
				rra(stack_a);
				pb(stack_a, stack_b);
				chunk_j++;
			}
			else
			{
				rra(stack_a);
			}			
			
		}
		chunk_i++;
	}
	ft_lstprint(stack_a, stack_b);
}


void	swap_all(t_list **stack_a, t_list **stack_b)
{
	pb_by_chunks(stack_a, stack_b, stack_len(stack_a), 10);
	while (*stack_b)
		quick_sort(stack_a, stack_b);
	ft_lstprint(stack_a, stack_b);
}
