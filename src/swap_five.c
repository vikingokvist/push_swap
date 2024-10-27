/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:34:04 by ctommasi          #+#    #+#             */
/*   Updated: 2024/10/25 12:34:05 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap_five(t_list **stack_a, t_list **stack_b)
{
	pb(stack_a, stack_b);
	pb(stack_a, stack_b);
	swap_three(stack_a);
	ft_lstprint(stack_a, stack_b);
	while (*stack_b)
    {
        if ((*stack_a)->index > (*stack_b)->index && (*stack_a)->next->index < (*stack_b)->index)
		{
			pa(stack_b, stack_a);
			ft_lstprint(stack_a, stack_b);ft_printf("\n\tpa\n");
		}
        else
		{
			ra(stack_a);
			ft_lstprint(stack_a, stack_b); ft_printf("\n\tra\n");
		}
    }
}


