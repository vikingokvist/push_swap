/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:53:04 by ctommasi          #+#    #+#             */
/*   Updated: 2024/10/30 17:53:08 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	reverse_rotate2(t_list **stack_x)
{
	t_list	*last;
	t_list	*last_prev;

	if (!stack_x || !*stack_x || !(*stack_x)->next)
		return ;
	last = *stack_x;
	last_prev = NULL;
	while (last->next != NULL)
	{
		last_prev = last;
		last = last->next;
	}
	last_prev->next = NULL;
	last->next = *stack_x;
	last->prev = NULL;
	(*stack_x)->prev = last;
	*stack_x = last;
}

void	rra2(t_list **stack_a)
{
	if (*stack_a != NULL && (*stack_a)->next != NULL)
		reverse_rotate2(stack_a);
}

void	rrb2(t_list **stack_b)
{
	if (*stack_b != NULL && (*stack_b)->next != NULL)
		reverse_rotate2(stack_b);
}

void	rrr2(t_list **stack_a, t_list **stack_b)
{
	if ((*stack_a != NULL && (*stack_a)->next != NULL)
		&& (*stack_b != NULL && (*stack_b)->next != NULL))
	{
		reverse_rotate2(stack_a);
		reverse_rotate2(stack_b);
	}
}
