/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <fooswyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:26:26 by fooswyn           #+#    #+#             */
/*   Updated: 2022/05/10 16:36:01 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"





void    solve(t_data *data)
{
    if (ft_lstsize(data->a) <= 5)
        solve_5_or_less(data);
    //else
      //  global_solve(data);
}