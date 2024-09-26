/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferro-d <rferro-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:26:10 by rferro-d          #+#    #+#             */
/*   Updated: 2024/09/25 14:26:07 by rferro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (2048);
	return (0);
}

/*
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_isdigit(48));
	printf("%d\n", ft_isdigit(20));
	printf("%d\n", isdigit(48));
	printf("%d\n", isdigit(20));
	return (0);
}*/
