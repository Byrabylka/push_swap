#include "../incs/push_swap.h"

void	swap_stack(t_data *data, int p)
{
	if (p)
		swap_a(data, 1);
	else
		swap_b(data, 1);
}

void	rotate_stack(t_data *data, int p)
{
	if (p)
		rotate_a(data, 1);
	else
		rotate_b(data, 1);
}

void	r_rotate_stack(t_data *data, int p)
{
	if (p)
		r_rotate_a(data, 1);
	else
		r_rotate_b(data, 1);
}