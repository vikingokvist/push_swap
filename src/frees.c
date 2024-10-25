/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:28:25 by ctommasi          #+#    #+#             */
/*   Updated: 2024/10/22 15:28:26 by ctommasi         ###   ########.fr       */
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
