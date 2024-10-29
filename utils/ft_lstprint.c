/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:17:56 by ctommasi          #+#    #+#             */
/*   Updated: 2024/10/28 10:17:58 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_lstprint(t_list **stack_a, t_list **stack_b)
{
	t_list	*current_a = *stack_a;
	t_list	*current_b = *stack_b;
	int		len_a = stack_len(stack_a);
	int		len_b = stack_len(stack_b);
	int		padding_a = 0;
	int		padding_b = 0;

	ft_printf("\n--------------------------------");
	ft_printf("\n stack_a:\t stack_b:\n\n");
	if (len_b > len_a)
		padding_a = len_b - len_a;
	else if (len_a > len_b)
		padding_b = len_a - len_b;
	while (padding_a > 0)
	{
		ft_printf("\t\t[Node = %d]\n", current_b->value);
		current_b = current_b->next;
		padding_a--;
	}
	while (padding_b > 0)
	{
		ft_printf("[Node = %d]\n", current_a->value);
		current_a = current_a->next;
		padding_b--;
	}
	while (current_a != NULL || current_b != NULL)
	{
		if (current_a != NULL && current_b == NULL)
		{
			ft_printf("[Node = %d]\n", current_a->value);
			current_a = current_a->next;
		}
		else if (current_b != NULL && current_a == NULL)
		{
			ft_printf("\t\t[Node = %d]\n", current_b->value);
			current_b = current_b->next;
		}
		else if (current_a != NULL && current_b != NULL)
		{
			ft_printf("[Node = %d]\t[Node = %d]\n", current_a->value, current_b->value);
			current_a = current_a->next;
			current_b = current_b->next;
		}
	}
	ft_printf("[Node = NULL]\t[Node = NULL]\n");
	ft_printf("--------------------------------\n");

}
