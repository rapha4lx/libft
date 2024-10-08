/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferro-d <rferro-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:34:21 by rferro-d          #+#    #+#             */
/*   Updated: 2024/10/08 18:31:05 by rferro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	is_set(char const s1, char const *set)
{
	while (*(char *)set)
		if (s1 == *(char *)set++)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen((char *)s1) - 1;
	if (!is_set(s1[start], set) && !is_set(s1[end], set))
		return (ft_strdup(s1));
	while (is_set(s1[start], set))
		start++;
	while (is_set(s1[end], set))
		end--;
	return (ft_substr(s1, start, end - 1));
}
