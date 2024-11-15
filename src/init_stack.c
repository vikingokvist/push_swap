/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:14:57 by ctommasi          #+#    #+#             */
/*   Updated: 2024/10/28 10:15:00 by ctommasi         ###   ########.fr       */
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
			if (ft_check_valid_digits(temp, j) == 1)
				return (free_all(temp, array_len(argv[i], ' ')), 1);
			new = ft_lstnew(ft_atoi(temp[j++]));
			ft_lstadd_back(stack_a, new);
		}
		free_all(temp, array_len(argv[i], ' '));
		i++;
	}
	if (ft_lstcheck_dupe(stack_a) == 1)
		return (1);
	return (0);
}
