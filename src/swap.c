/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:16:26 by ctommasi          #+#    #+#             */
/*   Updated: 2024/10/28 10:16:30 by ctommasi         ###   ########.fr       */
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
	{
		swap(stack_a);
		write(1, "sa\n", 3);
	}
}

void	sb(t_list **stack_b)
{
	if ((*stack_b)->next && stack_b && *stack_b)
	{
		swap(stack_b);
		write(1, "sb\n", 3);
	}
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	if ((*stack_a)->next && stack_a && *stack_a
		&& (*stack_b)->next && stack_b && *stack_b)
	{
		swap(stack_a);
		swap(stack_b);
		write(1, "ss\n", 3);
	}
}
