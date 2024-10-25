/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:45:32 by ctommasi          #+#    #+#             */
/*   Updated: 2024/10/24 11:45:34 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_reverse_rotate(t_list **stack_x)
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

void	ft_rra(t_list **stack_a)
{
	if (*stack_a != NULL && (*stack_a)->next != NULL)
		ft_reverse_rotate(stack_a);
}

void	ft_rrb(t_list **stack_b)
{
	if (*stack_b != NULL && (*stack_b)->next != NULL)
		ft_reverse_rotate(stack_b);
}

void	ft_rrr(t_list **stack_a, t_list **stack_b)
{
	if ((*stack_a != NULL && (*stack_a)->next != NULL)
		&& (*stack_b != NULL && (*stack_b)->next != NULL))
	{
		ft_reverse_rotate(stack_a);
		ft_reverse_rotate(stack_b);
	}
}
