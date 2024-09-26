/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferro-d <rferro-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:34:00 by rferro-d          #+#    #+#             */
/*   Updated: 2024/09/25 15:28:06 by rferro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char*	temp_dest;
	const char*	temp_src;
	size_t	count;

	count = 0;
	temp_dest = dest;
	temp_src = src;
	while (count < n)
	{
		temp_dest[count] = temp_src[count];
		count++;
	}
	return (dest);
}
