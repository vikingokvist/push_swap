/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:16:37 by ctommasi          #+#    #+#             */
/*   Updated: 2024/10/28 10:16:41 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static size_t	get_pos(t_list **stack_x, int index)
{
	t_list	*current;
	size_t	pos;

	current = *stack_x;
	pos = 0;
	while (current != NULL)
	{
		if (current->index == index)
			return (pos);
		current = current->next;
		pos++;
	}
	return (pos);
}

void	swap_five(t_list **stack_a, t_list **stack_b)
{
	size_t	s_len;

	s_len = stack_len(stack_a);
	while (stack_len(stack_a) > 3)
	{
		if ((*stack_a)->index != 0 && (*stack_a)->index != 1)
		{
			if (get_pos(stack_a, 0) <= (s_len / 2)
				|| get_pos(stack_a, 1) <= (s_len / 2))
				ra(stack_a);
			else
				rra(stack_a);
		}
		if ((*stack_a)->index == 0 || (*stack_a)->index == 1)
			pb(stack_a, stack_b);
	}
	if (check_order(stack_a) == 0)
		swap_three(stack_a);
	if (check_order(stack_b) == 1)
		sb(stack_b);
	pa(stack_b, stack_a);
	pa(stack_b, stack_a);
}
