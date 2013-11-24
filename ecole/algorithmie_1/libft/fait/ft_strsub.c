/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmancero <jmancero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 10:21:39 by jmancero          #+#    #+#             */
/*   Updated: 2013/11/24 10:30:47 by jmancero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../reverifier/libft.h"
#include <string.h>

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int i;
	char *str;

	i = start;
	str = ft_memalloc(len + 1);
	if(s && str)
	{
		while ((i - start) < len)
		{
			str[i-start] = s[i];
			i++;
		}
		str[i - start] = '\0';
		return (str);
	}
	return (NULL);
}
