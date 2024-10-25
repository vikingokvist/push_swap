/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:28:31 by ctommasi          #+#    #+#             */
/*   Updated: 2024/09/17 14:28:33 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	word_len(char const *s, char c, size_t start)
{
	size_t	len;

	len = 0;
	while (s[start + len] && s[start + len] != c)
		len++;
	return (len);
}

size_t	array_len(char const *s, char c)
{
	size_t	i;
	size_t	len;
	size_t	check;

	check = 0;
	len = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			if (check == 1)
			{
				len++;
				check = 0;
			}
		}
		else
			check = 1;
		i++;
	}
	if (check == 1)
		len++;
	return (len);
}

size_t	stack_len(t_list **stack_x)
{
	size_t	len;
	t_list	*current;

	len = 0;
	current = *stack_x;
	while (current != NULL)
	{
		current = current->next;
		len++;
	}
	return (len);
}
