/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:18:04 by ctommasi          #+#    #+#             */
/*   Updated: 2024/10/28 10:18:06 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free_all(char **res, size_t i)
{
	while (i > 0)
	{
		free(res[i - 1]);
		i--;
	}
	free(res);
}

static size_t	word_len(char const *s, char c, size_t start)
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
