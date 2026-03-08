#include "list.h"

// typedef struct s_list t_list;

// struct		s_list
// {
//     t_list *next;
//     int 	data;
// }			t_list;

t_list *sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *tmp;
	int swap;

	if (!lst)
		return (lst);
	swap = 1;
	while (swap)
	{
		swap = 0;
		tmp = lst;
		while (tmp->next)
		{
			if (!cmp(tmp->data, tmp->next->data))
			{
				int temp = tmp->data;
				tmp->data = tmp->next->data;
				tmp->next->data = temp;
				swap = 1;
			}
			tmp = tmp->next;
		}
	}
	return (lst);
}