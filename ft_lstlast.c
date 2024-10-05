
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*it;
	if (lst == NULL)
		return (NULL);
	while ((it = lst->next)->next != NULL);
	return (it);
}
