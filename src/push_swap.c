/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:04:06 by ctommasi          #+#    #+#             */
/*   Updated: 2024/10/17 15:04:08 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_push_swap(t_list **stack_a, t_list **stack_b)
{
	t_list	*bin;
	long	stack_len;

	bin = *stack_b;
	stack_len = ft_lstlen(stack_a);
	ft_lstindex(stack_a);
	if (stack_len == 2)
		ft_sa(stack_a);
	else if (stack_len == 3)
		ft_swap_three(stack_a);
	else if (stack_len == 5)
		ft_swap_five(stack_a, stack_b);
	return (0);
}
