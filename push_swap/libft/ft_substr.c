/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:12:46 by fooswyn           #+#    #+#             */
/*   Updated: 2021/10/27 18:43:50 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	minn(size_t a, size_t b)
{
	if (a <= b)
		return (a);
	return (b);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{	
	unsigned int	i;
	char			*str;

	i = start;
	if (!s)
		return (0);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	str = malloc(minn(len, ft_strlen(s) - start + 1) + 1);
	if (!str)
		return (str);
	while (s[i] && len && s)
	{
		str[i - start] = s[i];
		i++;
		len--;
	}
	str[i - start] = 0;
	return (str);
}
