/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:34:04 by ctommasi          #+#    #+#             */
/*   Updated: 2024/10/25 12:34:05 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_swap_five(t_list **stack_a, t_list **stack_b)
{
	ft_pb(stack_a, stack_b);
	ft_pb(stack_a, stack_b);
	ft_swap_three(stack_a);
}
