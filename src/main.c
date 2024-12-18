/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:15:15 by ctommasi          #+#    #+#             */
/*   Updated: 2024/10/28 10:15:17 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;

	if (argc < 2)
		return (1);
	stack_a = malloc(sizeof(t_list *));
	if (!stack_a)
		return (1);
	stack_b = malloc(sizeof(t_list *));
	if (!stack_b)
		return (free(stack_a), 1);
	*stack_a = NULL;
	*stack_b = NULL;
	if (init_stack(stack_a, argc, argv) == 1)
	{
		ft_lstfree(stack_a);
		ft_lstfree(stack_b);
		write(2, "Error\n", 6);
		return (1);
	}
	if (ft_lst_isordered(stack_a) == 1)
		return (ft_lstfree(stack_a), ft_lstfree(stack_b), 0);
	push_swap(stack_a, stack_b);
	return (ft_lstfree(stack_a), ft_lstfree(stack_b), 0);
}
