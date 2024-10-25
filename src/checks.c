/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:44:20 by ctommasi          #+#    #+#             */
/*   Updated: 2024/10/23 11:44:21 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_dupe(t_list **stack_a)
{
	t_list	*current;
	t_list	*compare;

	current = *stack_a;
	while (current != NULL)
	{
		compare = current->next;
		while (compare != NULL)
		{
			if (current->value == compare->value)
				return (1);
			compare = compare->next;
		}
		current = current->next;
	}
	return (0);
}

int	check_digit(char **temp, int j)
{
	int	k;

	k = 0;
	while (temp[j][k])
	{
		if (ft_atoi(temp[j]) > 2147483647 || ft_atoi(temp[j]) < -2147483648)
			return (1);
		if (temp[j][k] == '-' || temp[j][k] == '+')
			k++;
		if (!ft_isdigit(temp[j][k]))
			return (1);
		k++;
	}
	return (0);
}

int	check_order(t_list **stack_a)
{
	t_list	*current;
	int		last_value;

	current = (*stack_a)->next;
	last_value = (*stack_a)->value;
	while (current != NULL)
	{
		if (last_value < current->value)
		{
			last_value = current->value;
			current = current->next;
		}
		else
			return (0);
	}
	return (1);
}
