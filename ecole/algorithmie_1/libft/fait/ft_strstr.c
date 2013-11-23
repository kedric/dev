/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmancero <jmancero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 14:49:28 by jmancero          #+#    #+#             */
/*   Updated: 2013/11/23 16:09:28 by jmancero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
int ft_comp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ( s1[i] == s2[i])
	{
		if (s2[i + 1] == '\0')
			return (1);
		i++;
	}
	return (0);
}

char *ft_strstr(const char *s1, const char *s2)
{
	int i;
	int match;

	i = 0;
	match = 0;

	if (s1 && s2 && s2 != 0)
	{
		while (s1[i] != '\0')
		{
			if(s1[i] == s2[0])
			{
				match = ft_comp(((char *)s1 + i), ((char *)s2)); 
				if (match == 1)
					return ((char *)s1 + i);
			}
			i++;	
		}
		return ((char *)s1);
	}
}
