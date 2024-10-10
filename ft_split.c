/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferro-d <rferro-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:22:05 by rferro-d          #+#    #+#             */
/*   Updated: 2024/10/10 19:18:24 by rferro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	get_next_c(char const *s1, char c)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] != c)
		i++;
	return (i);
}

size_t	start_buff(char ***buff, char const *s1, char c)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (s1[i])
	{
		while (s1[i] && s1[i] != c)
			i++;
		while (s1[i] && s1[i] == c)
			i++;
		k++;
	}
	*buff = (char **)malloc(sizeof(char *) * (k + 1));
	return (k);
}

char	**ft_split(char const *s1, char c)
{
	char	**buff;
	size_t	buff_sz;
	size_t	i;
	size_t	j;
	size_t	it;

	i = 0;
	j = 0;
	it = 0;
	if (s1 == NULL)
		return (NULL);
	buff_sz = start_buff(&buff, s1, c);
	if (buff == NULL)
		return (NULL);
	while (*s1 && buff_sz > j)
	{
		i = get_next_c(s1, c);
		if (i != 0)
		{
			buff[j] = (char*)malloc(sizeof(char) * (i + 1));
			if (buff[j] == NULL)
			{
				while (it < j)
					free(buff[it++]);
				free(buff);
				return (NULL);
			}
			ft_strlcpy(buff[j], s1, i + 1);
			j++;
			s1 += i;
		}
		else
			s1++;
	}
	buff[j] = NULL;
	return (buff);
}
