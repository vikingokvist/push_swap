/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:08:03 by ctommasi          #+#    #+#             */
/*   Updated: 2024/10/17 15:08:04 by ctommasi         ###   ########.fr       */
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
		return (1);
	*stack_a = NULL;
	*stack_b = NULL;
	if (ft_init_stack(stack_a, argc, argv) == 1)
	{
		ft_lstfree(stack_a);
		ft_lstfree(stack_b);
		ft_printf("Error\n");
		return (1);
	}
	if (ft_check_order(stack_a) == 1)
		return (ft_lstfree(stack_a), ft_lstfree(stack_b), 1);
	ft_push_swap(stack_a, stack_b);
	ft_lstprint(stack_a, stack_b);
	return (ft_lstfree(stack_a), ft_lstfree(stack_b), 0);
}
