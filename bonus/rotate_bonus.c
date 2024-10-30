/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:53:13 by ctommasi          #+#    #+#             */
/*   Updated: 2024/10/30 17:53:16 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	rotate2(t_list **stack_x)
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

void	ra2(t_list **stack_a)
{
	if (*stack_a != NULL && (*stack_a)->next != NULL)
		rotate2(stack_a);
}

void	rb2(t_list **stack_b)
{
	if (*stack_b != NULL && (*stack_b)->next != NULL)
		rotate2(stack_b);
}

void	rr2(t_list **stack_a, t_list **stack_b)
{
	if (*stack_a != NULL && (*stack_a)->next != NULL
		&& *stack_b != NULL && (*stack_b)->next != NULL)
	{
		rotate2(stack_a);
		rotate2(stack_b);
	}
}
