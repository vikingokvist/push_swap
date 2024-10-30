/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:53:21 by ctommasi          #+#    #+#             */
/*   Updated: 2024/10/30 17:53:25 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	swap2(t_list **stack_x)
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

void	sa2(t_list **stack_a)
{
	if ((*stack_a)->next && stack_a && *stack_a)
		swap2(stack_a);
}

void	sb2(t_list **stack_b)
{
	if ((*stack_b)->next && stack_b && *stack_b)
		swap2(stack_b);
}

void	ss2(t_list **stack_a, t_list **stack_b)
{
	if ((*stack_a)->next && stack_a && *stack_a
		&& (*stack_b)->next && stack_b && *stack_b)
	{
		swap2(stack_a);
		swap2(stack_b);
	}
}
