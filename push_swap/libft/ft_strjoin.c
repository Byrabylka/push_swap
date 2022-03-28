/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:31:59 by fooswyn           #+#    #+#             */
/*   Updated: 2021/10/24 20:57:47 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

        char	*ft_strjoin(char const *s1, char const *s2)
        {
            int		i;
            int		j;
            char	*str;

            i = 0;
            j = 0;
            if (!s1 || !s2)
                return (0);
            str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
            if (!str)
                return (str);
            while (s1[i])
            {
                str[i] = s1[i];
                i++;
            }	
            while (s2[j])
            {
                str[i + j] = s2[j];
                j++;
            }
            str[i + j] = 0;
            return (str);
        }
