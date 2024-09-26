/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferro-d <rferro-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:22:00 by rferro-d          #+#    #+#             */
/*   Updated: 2024/09/24 12:31:32 by rferro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	*ft_memset(void *s, int c, size_t n)
{
	while (n > 0)
	{
		*((char*)s) = (unsigned char)c;
		s++;
		n--;
	}
	return (s);
}
/*
#include <string.h>

int	main()
{
	char mem[] = "asdkakfjaksjkJKASJDM<CZX<NVJHRUHwu";
	char mem2[] = "asdkakfjaksjkJKASJDM<CZX<NVJHRUHwu";

	memset(mem + 5, '+', 4);
	
	ft_memset(mem2 + 5, '+', 4);
	
	printf("%s\n", mem);
	printf("%s\n", mem2);
}*/
