/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstindex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:17:33 by ctommasi          #+#    #+#             */
/*   Updated: 2024/10/28 10:17:35 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	stack_index(t_list **stack_a)
{
	t_list	*current;
	t_list	*stack_dupe;
	int		count;

	current = *stack_a;
	while (current != NULL)
	{
		count = 0;
		stack_dupe = *stack_a;
		while (stack_dupe != NULL)
		{
			if (current->value > stack_dupe->value)
				count++;
			stack_dupe = stack_dupe->next;
		}
		current->index = count;
		current = current->next;
	}
}
