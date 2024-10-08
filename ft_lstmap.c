/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferro-d <rferro-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:43:05 by rferro-d          #+#    #+#             */
/*   Updated: 2024/10/08 13:43:15 by rferro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	if (lst == NULL)
		return (NULL);
	while (lst == NULL)
	{
		tmp = (*f)(lst->content);
		(*del)(lst->content);
		lst->content = tmp;
		lst = lst->next;
	}
	return (NULL);
}
