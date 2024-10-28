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

	first = *stack_x;
	*stack_x = (*stack_x)->next;
	last = *stack_x;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = first;
	first->next = NULL;
}

void	ra(t_list **stack_a)
{
	if (*stack_a != NULL && (*stack_a)->next != NULL)
	{
		rotate(stack_a);
		ft_printf("ra\n");
	}
		
}

void	rb(t_list **stack_b)
{
	if (*stack_b != NULL && (*stack_b)->next != NULL)
	{
		rotate(stack_b);
		ft_printf("rb\n");
	}
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	if (*stack_a != NULL && (*stack_a)->next != NULL
		&& *stack_b != NULL && (*stack_b)->next != NULL)
	{
		rotate(stack_a);
		rotate(stack_b);
		ft_printf("rr\n");
	}
}
