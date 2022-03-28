/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 18:34:07 by fooswyn           #+#    #+#             */
/*   Updated: 2022/03/28 18:04:15 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
#include <stdio.h>

#include "../libft/libft.h"


typedef struct s_data
{
	struct	s_stack	*a;
	struct	s_stack	*b;
	char	**argv;
	int		stack_len;
	int		argc;
}				t_data;

int		pars1(t_data *data);
int 	pars2(t_data *data);
int 	pars3(t_data *data);
int		ft_error(int t);
t_data	*init_data(t_data *data, char **argv, int argc);
int		fill_stack_a(t_data *data);
long	long_atoi(char *str);
void	free_data(t_data *data);
int		is_sorted(t_data *data);
#endif