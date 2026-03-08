#include "ft_list.h"

int cmp(void *a, void *b);

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(void *, void *))
{
	if (begin_list == NULL || *begin_list == NULL)
		return ;

	t_list *lst = *begin_list;

	if (cmp(lst->data, data_ref) == 0)
	{
		*begin_list = lst->next;
		free(lst);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	else
		ft_list_remove_if(&lst->next, data_ref, cmp);
}