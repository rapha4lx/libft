/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferro-d <rferro-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:15:05 by rferro-d          #+#    #+#             */
/*   Updated: 2024/10/08 19:28:21 by rferro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	sz;
	char	*ss;

	sz = ft_strlen((char *)s);
	ss = (char *)malloc(sizeof(char) * (sz + 1));
	if (ss == NULL)
		return (NULL);
	while (*s)
		*ss++ = *s++;
	return (ss -= sz);
}
