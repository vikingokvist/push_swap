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

int	push_swap(t_list **stack_a, t_list **stack_b)
{
	size_t	s_len;

	s_len = stack_len(stack_a);
	stack_index(stack_a);
	if (s_len == 2)
		sa(stack_a);
	else if (s_len == 3)
		swap_three(stack_a);
	else if (s_len == 5)
		swap_five(stack_a, stack_b);
	else
		swap_all(stack_a, stack_b);
	return (0);
}
