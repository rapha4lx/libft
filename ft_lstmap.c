
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

