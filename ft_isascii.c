/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferro-d <rferro-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:48:28 by rferro-d          #+#    #+#             */
/*   Updated: 2024/09/25 14:26:48 by rferro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	 if (c >= 0 && c <= 127)
		 return (1);
	return (0);
}
/*
int	main()
{
	printf("%d\n", ft_isascii(0));
	printf("%d\n", ft_isascii(127));
	printf("%d\n", isascii(0));
	printf("%d\n", isascii(127));
}*/
