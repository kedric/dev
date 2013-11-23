/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmancero <jmancero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 14:22:57 by jmancero          #+#    #+#             */
/*   Updated: 2013/11/23 14:32:25 by jmancero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

char *ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0')
		{
			if (s[i] == (char)c)
				return ((char *)s + i);
			i++;
		}
		if (s[i] == (char)c)
			return ((char *)s + i);
	}
	return(0);
}
