/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferro-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:50:23 by rferro-d          #+#    #+#             */
/*   Updated: 2024/10/08 19:29:59 by rferro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*buf;

	buf = (char *)malloc(sizeof(char) * (len + 1));
	if (buf == NULL)
		return (NULL);
	i = 0;
	while (*((char *)s) && (*((char *)s) + (start + i)) && len--)
	{
		buf[i] = *(((char *)s) + (start + i));
		i++;
	}
	buf[i] = '\0';
	return (buf);
}
