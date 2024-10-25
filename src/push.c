/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:23:09 by ctommasi          #+#    #+#             */
/*   Updated: 2024/10/23 14:23:11 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_push(t_list **stack_src, t_list **stack_dest)
{
	t_list	*new_node;
	t_list	*temp;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return ;
	new_node->value = (*stack_src)->value;
	new_node->next = *stack_dest;
	*stack_dest = new_node;
	temp = *stack_src;
	*stack_src = (*stack_src)->next;
	free(temp);
}

void	ft_pa(t_list **stack_b, t_list **stack_a)
{
	if (stack_b != NULL && *stack_b != NULL)
		ft_push(stack_b, stack_a);
}

void	ft_pb(t_list **stack_a, t_list **stack_b)
{
	if (stack_a != NULL && *stack_a != NULL)
		ft_push(stack_a, stack_b);
}
