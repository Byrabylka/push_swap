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


typedef struct s_stack
{
	int			content;
	struct s_stack	*next;
}	t_stack;

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
void	solve(t_data *data, int n);
void	solve_5_or_less(t_data *data, int p);
void 	solve_5_or_less_b(t_data *data);
long	long_atoi(char *str);
void	free_data(t_data *data);
t_stack	*ft_predlast(t_stack *lst);
int		is_sorted(t_stack *stack);
int		is_sorted_b(t_stack *stack);
void	global_solve(t_data *data);

int		ft_lstsize(t_stack *lst);
t_stack	*ft_lstlast(t_stack *lst);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
t_stack	*ft_lstnew(int content);


void	ft_putstr_fd(char *s, int fd);
int		ft_isdigit(int ch);
char	**ft_split(char const *s, char c);
int		ft_strlen(const char *str);
void	ft_lstclear(t_stack **lst);

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

void	swap_stack(t_data *data, int p);
void	rotate_stack(t_data *data, int p);
void	r_rotate_stack(t_data *data, int p);

void ft_out(t_stack *a);
#endif