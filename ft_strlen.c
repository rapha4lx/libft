/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferro-d <rferro-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:17:55 by rferro-d          #+#    #+#             */
/*   Updated: 2024/09/25 14:27:17 by rferro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char *str)
{
	size_t	size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}
/*
#include <string.h>
int	main()
{
	printf("%ld\n", ft_strlen("asdk\nkwki"));
	printf("%ld\n", strlen("asdk\nkwki"));
}*/
