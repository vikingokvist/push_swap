/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:54:48 by ctommasi          #+#    #+#             */
/*   Updated: 2024/10/23 16:54:50 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_rotate(t_list **stack_x)
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

void	ft_ra(t_list **stack_a)
{
	if (*stack_a != NULL && (*stack_a)->next != NULL)
		ft_rotate(stack_a);
}

void	ft_rb(t_list **stack_b)
{
	if (*stack_b != NULL && (*stack_b)->next != NULL)
		ft_rotate(stack_b);
}

void	ft_rr(t_list **stack_a, t_list **stack_b)
{
	ft_ra(stack_a);
	ft_rb(stack_b);
}
