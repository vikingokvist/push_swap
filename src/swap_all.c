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

static int	get_midpoint(t_list **stack_a)
{
	int	len;

	len = stack_len(stack_a);
	if (len == 0)
		return (0);
	return (len / 2);
}

static t_list	*get_last(t_list **stack_x)
{
	t_list	*last;

	if (!*stack_x)
		return (NULL);
	last = *stack_x;
	while (last->next != NULL)
		last = last->next;
	return ((last));
}

static int	has_elements_below_midpoint(t_list **stack_a, int mid_point)
{
	t_list	*current;

	current = *stack_a;
	while (current != NULL)
	{
		if (current->value < mid_point)
			return (1);
		current = current->next;
	}
	return (0);
}

void	swap_all(t_list **stack_a, t_list **stack_b)
{
	int		mid_point;
	t_list	*last;

	while (stack_len(stack_a) > 2)
	{
		mid_point = get_midpoint(stack_a);
		last = get_last(stack_a);
		while (has_elements_below_midpoint(stack_a, mid_point))
		{
			while (*stack_a && (*stack_a)->value < mid_point)
			{
				pb(stack_a, stack_b);
			}
			if (last && last->value < mid_point)
			{
				rra(stack_a);
				pb(stack_a, stack_b);
			}
			else
			{
				ra(stack_a);
			}
			mid_point = get_midpoint(stack_a);
			last = get_last(stack_a);
			ft_lstprint(stack_a, stack_b);
		}
	}
	if (check_order(stack_a) != 1)
		sa(stack_a);
	while (*stack_b)
		pa(stack_b, stack_a);
	while (check_order(stack_a) != 1)
		ra(stack_a);
	ft_lstprint(stack_a, stack_b);
}
//find mid point,  (mid value)
//if less than midpoint, pbpbpb
//go to last node and check if its less than 7.
			    //If so rra and pb
//if not, ra, ra, ra until theres a value less than 7 and pbpbpb
//we moved all numbers less than midpoint
//get new midpoint of stack a
//send them pbpbpb
//no number higher than midpoint
//get new midpoint
//until 2 numbers left, if already ordered dont do pb
//separate by chunks
