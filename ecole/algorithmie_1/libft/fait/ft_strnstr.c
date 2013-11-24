/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmancero <jmancero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 16:18:32 by jmancero          #+#    #+#             */
/*   Updated: 2013/11/24 19:35:18 by jmancero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include "../reverifier/libft.h"

int ft_compn(char *s1, char *s2)
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

char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
    int i;
    int match;
	int size_s2;
	
    i = 0;
	size_s2 = ft_strlen((char *)s2);
    match = 0;
	
	if(!*s2)
	{
		return ((char *)s1);
	}
	while (s1[i] != '\0' && n > i)
	{
		if(s1[i] == s2[0])
		{
			match = ft_compn(((char *)s1 + i), ((char *)s2));
			if (match == 1 && size_s2 <= n + i)
				return ((char *)s1 + i);
		}
		i++;
	}
	return (NULL);
}

