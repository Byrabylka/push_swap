/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:08:48 by fooswyn           #+#    #+#             */
/*   Updated: 2021/10/20 17:11:36 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_size(int n)
{
	int	k;

	k = 0;
	if (n < 0)
	{
		n = -1 * n;
		k++;
	}
	while (n > 0)
	{
		n = n / 10;
		k++;
	}
	return (k);
}

void	ft_swap(char *a, char *b)
{
	char	current;

	current = *a;
	*a = *b;
	*b = current;
}

char	*ft_itoa2(char *str, int size)
{
	int	i;

	i = 0;
	while (i < size - i - 1)
	{
		ft_swap(&str[i], &str[size - i - 1]);
		i++;
	}
	str[size] = 0;
	return (str);
}

char	*ft_itoa(int n)
{
	int		i;
	int		size;
	char	*str;

	i = 0;
	size = ft_size(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0 || n == -0)
		return (ft_strdup("0"));
	str = malloc(size + 1);
	if (!str)
		return (str);
	if (n < 0)
	{
		str[size - 1] = '-';
		n = -1 * n;
	}
	while (n > 0)
	{
		str[i] = n % 10 + 48;
		n = n / 10;
		i++;
	}
	return (ft_itoa2(str, size));
}
