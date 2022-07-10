/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <fooswyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 18:04:13 by fooswyn           #+#    #+#             */
/*   Updated: 2022/07/10 19:52:25 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

int	ft_get_next_line(char **line)
{
	int		i;
	int		j;
	char	*buf;

	i = -1;
	buf = (char *)malloc(5);
	j = read(0, &buf[++i], 1);
	while (j > 0 && buf[i] != '\n' && buf[i] != '\0')
		j = read(0, &buf[++i], 1);
	buf[i] = '\n';
	i++;
	buf[i] = '\0';
	*line = buf;
	return (j);
}

int	ft_strcmp(char *s1, char *s2)
{
	if (s1 == NULL && s2 == NULL)
		return (0);
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (1);
		s1 ++;
		s2 ++;
	}
	return (0);
}

void	parser(t_data *data, char *str)
{
	if (!ft_strcmp(str, "pa\n"))
		push_a(data);
	else if (!ft_strcmp(str, "pb\n"))
		push_b(data);
	else if (!ft_strcmp(str, "sa\n"))
		swap_a(data);
	else if (!ft_strcmp(str, "sb\n"))
		swap_b(data);
	else if (!ft_strcmp(str, "ss\n"))
		swap_stack(data, 2);
	else if (!ft_strcmp(str, "ra\n"))
		rotate_a(data);
	else if (!ft_strcmp(str, "rb\n"))
		rotate_b(data);
	else if (!ft_strcmp(str, "rr\n"))
		rotate_stack(data, 2);
	else if (!ft_strcmp(str, "rra\n"))
		r_rotate_a(data);
	else if (!ft_strcmp(str, "rrb\n"))
		r_rotate_b(data);
	else if (!ft_strcmp(str, "rrr\n"))
		r_rotate_stack(data, 2);
	else
		write(1, "Error\n", 6);
}

void	checker(t_data *data)
{
	char	*str;
	int		count;

	count = ft_lstsize(data->a);
	while (ft_get_next_line(&str) > 0)
	{
		parser(data, str);
		free(str);
	}
	free(str);
	if (is_sorted(data->a) && ft_lstsize(data->a) == count
		&& !ft_lstsize(data->b))
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
}

int	main(int argc, char **argv)
{
	t_data	*data;

	data = NULL;
	if (argc < 2)
		ft_error();
	data = init_data(data, argv, argc);
	if (!fill_stack_a(data))
		ft_error();
	checker(data);
	free_data(data);
}
