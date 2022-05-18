/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:36:50 by fooswyn           #+#    #+#             */
/*   Updated: 2021/10/27 18:44:56 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

size_t	ft_words(char const *s, char c)
{
	size_t	n;
	size_t	i;

	n = 0;
	i = 0;
	while (s && s[i])
	{		
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			n++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (n);
}

char	**ft_free(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (0);
}

size_t	ft_lenn(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	*new_word(const char *s, char c)
{
	size_t	i;
	size_t	len;
	char	*arr;

	i = 0;
	len = ft_lenn(s, c);
	arr = (char *)malloc(sizeof(char) * (len + 1));
	if (!arr)
		return (0);
	while (i < len && s[i])
	{
		arr[i] = s[i];
		i++;
	}
	arr[len] = 0;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**arr;
	int		i;

	i = 0;
	if (!s)
		return (0);
	count = ft_words(s, c);
	arr = (char **)malloc(sizeof(char *) * (count + 1));
	if (!arr)
		return (arr);
	while (i < count)
	{
		while (*s == c)
			s++;
		arr[i] = new_word(s, c);
		if (!(arr[i]))
			return (ft_free(arr));
		s += ft_strlen(arr[i]);
		i++;
	}
	arr[count] = 0;
	return (arr);
}
