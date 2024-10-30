/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:15:56 by ctommasi          #+#    #+#             */
/*   Updated: 2024/10/28 10:15:59 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	rotate(t_list **stack_x)
{
	t_list	*first;
	t_list	*last;

	if (!stack_x || !*stack_x || !(*stack_x)->next)
		return ;
	first = *stack_x;
	last = *stack_x;
	*stack_x = (*stack_x)->next;
	(*stack_x)->prev = NULL;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = first;
	first->prev = last;
	first->next = NULL;
}

void	ra(t_list **stack_a)
{
	if (*stack_a != NULL && (*stack_a)->next != NULL)
	{
		rotate(stack_a);
		write(1, "ra\n", 3);
	}
}

void	rb(t_list **stack_b)
{
	if (*stack_b != NULL && (*stack_b)->next != NULL)
	{
		rotate(stack_b);
		write(1, "rb\n", 3);
	}
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	if (*stack_a != NULL && (*stack_a)->next != NULL
		&& *stack_b != NULL && (*stack_b)->next != NULL)
	{
		rotate(stack_a);
		rotate(stack_b);
		write(1, "rr\n", 3);
	}
}
