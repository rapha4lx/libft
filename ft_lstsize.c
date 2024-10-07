
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*it;
	int	i;
	if (lst == NULL)
		return (0);
	i = 1;
	it = lst;
	while((it = it->next) != NULL)
		i++;
	return (i);
}
