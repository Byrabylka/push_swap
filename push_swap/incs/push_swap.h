/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 18:34:07 by fooswyn           #+#    #+#             */
/*   Updated: 2022/03/29 16:46:18 by fooswyn          ###   ########.fr       */
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
	int		min;
	int		max;
	int		median;
}				t_data;

int		pars1(t_data *data);
int 	pars2(t_data *data);
int 	pars3(t_data *data);
void	ft_error(void);
t_data	*init_data(t_data *data, char **argv, int argc);
void	find_min_max(t_data *data, int p);
void	find_median(t_data *data, int p);
int		fill_stack_a(t_data *data);
void	solve(t_data *data);
void	solve_5_or_less(t_data *data);
long	long_atoi(char *str);
void	free_data(t_data *data);
int		is_sorted(t_data *data);
void	global_solve(t_data *data);

void	swap_a(t_data *data, int p);
void	swap_b(t_data *data, int p);
void	s_swap(t_data *data);
void	push_a(t_data *data);
void	push_b(t_data *data);
void	rotate_a(t_data *data, int p);
void	rotate_b(t_data *data, int p);
void	r_rotate(t_data *data);
void	r_rotate_a(t_data *data, int p);
void	r_rotate_b(t_data *data, int p);
void	r_r_rotate(t_data *data);
#endif