/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:54:39 by ctommasi          #+#    #+#             */
/*   Updated: 2024/10/22 11:54:40 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	init_stack(t_list **stack_a, int argc, char **argv)
{
	t_list	*new;
	char	**temp;
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{
		temp = ft_split(argv[i], ' ');
		if (!temp)
			return (1);
		j = 0;
		while (temp[j])
		{
			if (check_digit(temp, j) == 1)
				return (free_all(temp, array_len(argv[i], ' ')), 1);
			new = ft_lstnew(ft_atoi(temp[j++]));
			ft_lstadd_back(stack_a, new);
		}
		free_all(temp, array_len(argv[i], ' '));
		i++;
	}
	if (check_dupe(stack_a) == 1)
		return (1);
	return (0);
}
