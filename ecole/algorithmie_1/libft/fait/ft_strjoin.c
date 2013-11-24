/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmancero <jmancero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 13:25:29 by jmancero          #+#    #+#             */
/*   Updated: 2013/11/24 13:49:35 by jmancero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../reverifier/libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	int i;
	int len;
	char *str;

	i = 0;

	if (s1 && s2)
	{
		len = ft_strlen((char *)s1) + (ft_strlen((char *)s2));
		str = ft_memalloc(len + 1);
		if (str)
		{
			while (s1[i] != '\0')
			{
				str[i] = s1[i];
				i++;
			}
			i = 0;
			len = ft_strlen((char *)s1);
			while (s2[i] != '\0')
			{
				str[i + len]= s2[i];
				i++;
			}
			str[i + len] = '\0';
			return (str);
		}
	}
	return (NULL);
}
