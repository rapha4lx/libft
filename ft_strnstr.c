/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferro-d <rferro-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 14:20:40 by rferro-d          #+#    #+#             */
/*   Updated: 2024/09/27 17:03:55 by rferro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*b;
	size_t	c;
	char	*temp;
	b = (char*)big;
	while (*b && len > 0)
	{
		c = 0;
		temp = b;
		while (little[c])
		{
			if (little[c] != *b)
				break;
			c++;
			b++;
		}
		b = temp;
		if(little[c] == '\0')
			return (b);
		b++;
		len--;
	}
	return ((char*)b);
}
