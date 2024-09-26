/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferro-d <rferro-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:34:16 by rferro-d          #+#    #+#             */
/*   Updated: 2024/09/25 14:26:29 by rferro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) ||
		((c >= 65 && c <= 90) 
		 || (c >= 97 && c <= 122 )))
		return (1);
	return (0);
}
/*
int	main()
{
	printf("%d\n", ft_isalnum(10));
	printf("%d\n", ft_isalnum(40));
	printf("%d\n", ft_isalnum(10));
	printf("%d\n", ft_isalnum(40));
}*/
