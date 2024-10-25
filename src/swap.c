/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:36:03 by ctommasi          #+#    #+#             */
/*   Updated: 2024/10/23 12:36:04 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	swap(t_list **stack_x)
{
	t_list	*first;
	t_list	*second;
	int		temp;

	first = *stack_x;
	second = first->next;
	temp = first->value;
	first->value = second->value;
	second->value = temp;
}

void	sa(t_list **stack_a)
{
	if ((*stack_a)->next && stack_a && *stack_a)
		swap(stack_a);
}

void	sb(t_list **stack_b)
{
	if ((*stack_b)->next && stack_b && *stack_b)
		swap(stack_b);
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	if ((*stack_a)->next && stack_a && *stack_a
		&& (*stack_b)->next && stack_b && *stack_b)
	{
		sa(stack_a);
		sb(stack_b);
	}
}
