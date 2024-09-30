/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferro-d <rferro-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:21:36 by rferro-d          #+#    #+#             */
/*   Updated: 2024/09/30 19:27:23 by rferro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	sz;
	char	*d;
	char	*s;
	size_t	srcz;

	sz = 0;
	d = (char*)dest;
	s = (char*)src;
	srcz = ft_strlen((char*)src);
	while (sz < n && s[sz] && srcz > sz)
	{
		d[sz] = s[sz];
		sz++;
	}
	return (dest);
}
