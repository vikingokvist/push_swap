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

static void	push_to_a(t_list **stack_a, t_list **stack_b)
{
	swap_three(stack_a);
	while (*stack_b)
	{
		if ((*stack_a)->value > (*stack_a)->next->value)
			sa(stack_a);
		pa(stack_b, stack_a);
	}
}

static t_list	*get_midpoint(t_list **stack_a)
{
	t_list	*mid_point;
	int		s_len;
	int		i;

	s_len = stack_len(stack_a);
	mid_point = *stack_a;
	i = 0;
	while (mid_point != NULL && i < s_len / 2)
	{
		mid_point = mid_point->next;
		i++;
	}
	return (mid_point);
}

static t_list	*get_last(t_list **stack_x)
{
	t_list	*last;

	last = *stack_x;
	while (last->next != NULL)
		last = last->next;
	return (last);
}

static int	n_below_midpoint(t_list **stack_a, t_list *mid_point)
{
	t_list	*current;

	current = *stack_a;
	while (current != NULL)
	{
		if (current->index < mid_point->index)
			return (1);
		current = current->next;
	}
	return (0);
}

void	swap_all(t_list **stack_a, t_list **stack_b)
{
	t_list	*mid_point;
	t_list	*last;

	while (stack_len(stack_a) > 3)
	{
		last = get_last(stack_a);
		mid_point = get_midpoint(stack_a);
		while (n_below_midpoint(stack_a, mid_point) == 1)
		{
			if ((*stack_a)->index < mid_point->index
				|| last->index < mid_point->index)
			{
				if (last->index < mid_point->index)
					rra(stack_a);
				pb(stack_a, stack_b);
				if ((*stack_b) && (*stack_b)->next
					&& (*stack_b)->value < (*stack_b)->next->value)
					sb(stack_b);
			}
			else
				ra(stack_a);
		}
	}
	push_to_a(stack_a, stack_b);
}
