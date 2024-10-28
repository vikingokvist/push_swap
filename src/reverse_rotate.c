/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:15:47 by ctommasi          #+#    #+#             */
/*   Updated: 2024/10/28 10:15:51 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	reverse_rotate(t_list **stack_x)
{
	t_list	*first;
	t_list	*last;
	t_list	*last_prev;

	first = *stack_x;
	last_prev = NULL;
	last = *stack_x;
	while (last->next != NULL)
	{
		last_prev = last;
		last = last->next;
	}
	last_prev->next = NULL;
	last->next = first;
	*stack_x = last;
}

void	rra(t_list **stack_a)
{
	if (*stack_a != NULL && (*stack_a)->next != NULL)
		reverse_rotate(stack_a);
}

void	rrb(t_list **stack_b)
{
	if (*stack_b != NULL && (*stack_b)->next != NULL)
		reverse_rotate(stack_b);
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	if ((*stack_a != NULL && (*stack_a)->next != NULL)
		&& (*stack_b != NULL && (*stack_b)->next != NULL))
	{
		reverse_rotate(stack_a);
		reverse_rotate(stack_b);
	}
}
