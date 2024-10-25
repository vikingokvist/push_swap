/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:44:36 by ctommasi          #+#    #+#             */
/*   Updated: 2024/10/25 10:44:37 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_swap_three(t_list **stack_x)
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
		return (ft_sa(stack_x), 0);
	else if (pos[0] > pos[1] && pos[1] < pos[2] && pos[0] > pos[2])
		return (ft_ra(stack_x), 0);
	else if (pos[0] < pos[1] && pos[1] > pos[2] && pos[0] < pos[2])
		return (ft_sa(stack_x), ft_ra(stack_x), 0);
	else if (pos[0] > pos[1] && pos[1] > pos[2] && pos[0] > pos[2])
		return (ft_sa(stack_x), ft_rra(stack_x), 0);
	else if (pos[0] < pos[1] && pos[1] > pos[2] && pos[0] > pos[2])
		return (ft_rra(stack_x), 0);
	return (1);
}
