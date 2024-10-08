/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferro-d <rferro-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 18:19:20 by rferro-d          #+#    #+#             */
/*   Updated: 2024/10/08 18:21:53 by rferro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (s1 == NULL || s2 == NULL || n == 0)
		return (0);
	while (*(char *)s1 && *(char *)s2
		&& n - 1 > 0 && *(char *)s1 == *(char *)s2)
	{
		n--;
		s1++;
		s2++;
	}
	return (*(char *)s1 - *(char *)s2);
}
