/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:16:48 by ctommasi          #+#    #+#             */
/*   Updated: 2024/10/28 10:16:51 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap_three(t_list **stack_x)
{
	t_list	*current;
	int		pos[3];
	int		i;

	i = 0;
	current = *stack_x;
	while (current != NULL && i < 3)
	{
		pos[i] = current->index;
		current = current->next;
		i++;
	}
	if (pos[0] > pos[1] && pos[1] < pos[2] && pos[0] < pos[2])
		return (sa(stack_x));
	else if (pos[0] > pos[1] && pos[1] < pos[2] && pos[0] > pos[2])
		return (ra(stack_x));
	else if (pos[0] < pos[1] && pos[1] > pos[2] && pos[0] < pos[2])
		return (sa(stack_x), ra(stack_x));
	else if (pos[0] > pos[1] && pos[1] > pos[2] && pos[0] > pos[2])
		return (sa(stack_x), rra(stack_x));
	else if (pos[0] < pos[1] && pos[1] > pos[2] && pos[0] > pos[2])
		return (rra(stack_x));
}
