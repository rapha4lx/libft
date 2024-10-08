/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferro-d <rferro-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:35:46 by rferro-d          #+#    #+#             */
/*   Updated: 2024/10/08 19:46:34 by rferro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*tmp;
	int	i;
	int	nn;

	i = 0;
	nn = n;
	while (nn != 0)
	{
		nn /= 10;
		i++;
	}
	tmp = (char *)malloc(sizeof(char) * (i + 1));
	if (tmp == NULL)
		return (NULL);
	tmp[i--] = '\0';
	while (n != 0)
	{
		tmp[i--] = n % 10 + '0';
		n /= 10;
	}
	return (tmp);
}
