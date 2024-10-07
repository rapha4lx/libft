
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*it;
	if (lst == NULL)
		return (NULL);
	it = lst;
	while ((lst = lst->next) != NULL)
		it = lst;
	return (it);
}
