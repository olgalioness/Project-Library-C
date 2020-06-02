#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*result;

	result = NULL;
	result = malloc(sizeof(t_list));
	if (result == NULL)
		return (NULL);
	result->content = content;
	result->next = NULL;
	return (result);
}
