/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:49:09 by ctommasi          #+#    #+#             */
/*   Updated: 2024/10/30 14:49:10 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	do_movements(t_list **stack_a, t_list **stack_b, char *line)
{
	if (!ft_strcmp(line, "pa\n"))
		return (pa2(stack_b, stack_a), 0);
	else if (!ft_strcmp(line, "pb\n"))
		return (pb2(stack_a, stack_b), 0);
	else if (!ft_strcmp(line, "sa\n"))
		return (sa2(stack_a), 0);
	else if (!ft_strcmp(line, "sb\n"))
		return (sb2(stack_b), 0);
	else if (!ft_strcmp(line, "ss\n"))
		return (ss2(stack_a, stack_b), 0);
	else if (!ft_strcmp(line, "ra\n"))
		return (ra2(stack_a), 0);
	else if (!ft_strcmp(line, "rb\n"))
		return (rb2(stack_b), 0);
	else if (!ft_strcmp(line, "rr\n"))
		return (rr2(stack_a, stack_b), 0);
	else if (!ft_strcmp(line, "rra\n"))
		return (rra2(stack_a), 0);
	else if (!ft_strcmp(line, "rrb\n"))
		return (rrb2(stack_b), 0);
	else if (!ft_strcmp(line, "rrr\n"))
		return (rrr2(stack_a, stack_b), 0);
	else
		return (1);
}

static void	ft_write(t_list **stack_a, t_list **stack_b, int check)
{
	if (ft_lst_isordered(stack_a) == 1 && *stack_b == NULL && check == 1)
		write(1, "OK\n", 3);
	else if (ft_lst_isordered(stack_a) != 1 && check == 1)
		write(1, "KO\n", 3);
	else if (check == 0)
		write(2, "Error\n", 6);
	if (*stack_a)
		ft_lstfree(stack_a);
	if (*stack_b)
		ft_lstfree(stack_b);
}

int	main(int argc, char *argv[])
{
	t_list	**stack_a;
	t_list	**stack_b;
	char	*line;

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
		return (ft_write(stack_a, stack_b, 0), 1);
	line = get_next_line(0);
	while (line != NULL)
	{
		if (do_movements(stack_a, stack_b, line))
			return (free(line), ft_write(stack_a, stack_b, 1), 1);
		free(line);
		line = get_next_line(0);
	}
	return (ft_write(stack_a, stack_b, 1), 0);
}
