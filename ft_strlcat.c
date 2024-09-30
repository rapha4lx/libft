/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferro-d <rferro-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:59:47 by rferro-d          #+#    #+#             */
/*   Updated: 2024/09/30 14:28:57 by rferro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	s;

	i = ft_strlen(dst);
	s = ft_strlen((char*)src);
	if (size < i + s)
		return (s + size);
	j = 0;
	while (i + j < size - 1)
	{
		dst[(i + j)] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + s);
}
