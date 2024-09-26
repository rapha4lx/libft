/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferro-d <rferro-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:21:36 by rferro-d          #+#    #+#             */
/*   Updated: 2024/09/26 16:06:09 by rferro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *d;
	size_t	size;

	d = (char*)dest;
	size = ft_strlen(src);
	if (size < n)
		while (size-- < n)
			d++ = ((char*)src)++;
	else
		while (size++ > n)
			d++ = ((char*)src)++;
	return (dest);
}
