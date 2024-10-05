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
	size_t	j;
	size_t	k;
	size_t	sz_src;

	j = ft_strlen(dst);
	k = 0;
	sz_src = ft_strlen((char*)src);
	if (size == 0)
		return (sz_src);
	while (src[k] && j + k + 1 < size)
	{
		dst[j + k] = src[k];
		k++;
	}
	dst[j + k] = '\0';
	if (size < sz_src)
		return (sz_src + size);
	return (j + sz_src);
}
