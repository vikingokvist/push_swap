/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfree2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:54:30 by ctommasi          #+#    #+#             */
/*   Updated: 2024/10/30 12:54:31 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_lstfree2(t_list **stack_x)
{
	t_list	*temp;

	while (*stack_x)
	{
		temp = (*stack_x)->next;
		free(*stack_x);
		*stack_x = temp;
	}
}
