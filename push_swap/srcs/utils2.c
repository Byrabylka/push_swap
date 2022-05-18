#include "../incs/push_swap.h"

int	ft_isdigit(int ch)
{
	return (ch >= '0' && ch <= '9');
}

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_lstclear(t_stack **lst)
{
	t_stack	*list;
	t_stack	*buf;

	list = *lst;
	while (list)
	{
		buf = list;
		list = list->next;
		free(buf);
	}
	*lst = 0;
}

t_stack	*ft_lst_copy(t_stack *lst)
{
	t_stack *buff;
	t_stack *new;
	
	buff = lst;
	new = NULL;
	while (buff)
	{
		ft_lstadd_back(&new, ft_lstnew(buff->content));
		buff = buff->next;
	}
	return (new);
}