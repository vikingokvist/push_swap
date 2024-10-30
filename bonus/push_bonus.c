/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:52:56 by ctommasi          #+#    #+#             */
/*   Updated: 2024/10/30 17:52:58 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	push2(t_list **stack_src, t_list **stack_dest)
{
	t_list	*new_node;
	t_list	*temp;

	new_node = ft_lstnew((*stack_src)->value);
	if (!new_node)
		return ;
	new_node->index = (*stack_src)->index;
	new_node->next = *stack_dest;
	if (*stack_dest)
		(*stack_dest)->prev = new_node;
	*stack_dest = new_node;
	temp = *stack_src;
	*stack_src = (*stack_src)->next;
	free(temp);
}

void	pa2(t_list **stack_b, t_list **stack_a)
{
	if (stack_b != NULL && *stack_b != NULL)
		push2(stack_b, stack_a);
}

void	pb2(t_list **stack_a, t_list **stack_b)
{
	if (stack_a != NULL && *stack_a != NULL)
		push2(stack_a, stack_b);
}
