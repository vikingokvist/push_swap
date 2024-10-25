/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 11:23:56 by ctommasi          #+#    #+#             */
/*   Updated: 2024/09/20 11:24:00 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**res;

	i = 0;
	j = 0;
	res = malloc((array_len(s, c) + 1) * sizeof(char *));
	if (res == NULL)
		return (free_all(res, i), NULL);
	while (i < array_len(s, c))
	{
		while (s[j] == c)
			j++;
		res[i] = malloc((word_len(s, c, j) + 1) * sizeof(char));
		if (!res[i])
			return (free_all(res, i), NULL);
		k = 0;
		while (s[j] && s[j] != c)
			res[i][k++] = s[j++];
		res[i][k] = '\0';
		i++;
	}
	res[i] = NULL;
	return (res);
}
