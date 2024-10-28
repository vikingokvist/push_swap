/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frees.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:14:49 by ctommasi          #+#    #+#             */
/*   Updated: 2024/10/28 10:14:52 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	stack_free(t_list **stack_x)
{
	t_list	*temp;

	while (*stack_x)
	{
		temp = (*stack_x)->next;
		free(*stack_x);
		*stack_x = temp;
	}
	free(stack_x);
}

void	free_all(char **res, size_t i)
{
	while (i > 0)
	{
		free(res[i - 1]);
		i--;
	}
	free(res);
}
