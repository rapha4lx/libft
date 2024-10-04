/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferro-d <rferro-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:22:05 by rferro-d          #+#    #+#             */
/*   Updated: 2024/10/03 18:54:10 by rferro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_split_count(char const *s1, char c)
{
	size_t	j;
	
	j = 0;
	while (*s1++)
		if (*(char*)s1 == c
			&& *(s1 + 1) != '\0' && *(s1 + 1) != c)
			j++;
	return (j + 2);
}

static size_t	get_split_start(char const *s1, char c)
{
	size_t	i;

	i = 0;
	while (*s1 && *s1 == c)
	{
		s1++;
		i++;
	}
	return (i);
}

static size_t	get_split_end(char const *s1, char c)
{
	size_t	i;

	i = 0;
	while (*s1 && *s1 != c)
	{
		s1++;
		i++;
	}
	return (i);
}

char	**ft_split(char const *s1, char c)
{
	char	**buff;
	size_t	sz;
	size_t	start;
	size_t	end;

	sz = get_split_count(s1, c);
	buff = (char**)malloc(sizeof(char*) * (sz + 1));
	start = 0;
	end = 0;
	while (*s1)
	{
		start = get_split_start(s1, c);
		end = get_split_end(s1 + start, c);
		if (start == 0 && end == 0)
			break;
		*buff = ft_substr(s1, start, end);
		buff++;
		start = start + end;
		s1 += start;
		end = 0;
	}
	*buff = NULL;
	return (buff -= sz - 1);
}
