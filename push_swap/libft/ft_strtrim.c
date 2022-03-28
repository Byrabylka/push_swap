/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 20:22:30 by fooswyn           #+#    #+#             */
/*   Updated: 2021/10/25 17:18:00 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_include(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

size_t	last_char(char const *s1, char const *set)
{
	int	i;

	if (!s1)
		return (0);
	i = ft_strlen(s1) - 1;
	while (ft_include(s1[i], set) && i)
	{
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = last_char(s1, set);
	if (!s1)
		return (0);
	if (k <= 0)
		return (ft_strdup(""));
	while (ft_include(s1[i], set))
		i++;
	str = malloc(k - i + 2);
	if (!str)
		return (str);
	while (i <= k)
		str[j++] = s1[i++];
	str[j] = 0;
	return (str);
}
