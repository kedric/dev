/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmancero <jmancero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 10:26:56 by jmancero          #+#    #+#             */
/*   Updated: 2013/11/23 13:54:50 by jmancero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

    i = 0;
	if(s1 && s2)
	{
		while(((*((char *)s1 +i) != '\0') && (n > i)) 
			  || ((*((char *)s2 + i) != '\0') && (n > i)))
		{
			if (*((char *)s1 + i) > *((char *)s2 + i))
				return (1);
			if (*((char *)s1 + i) < *((char *)s2 + i))
				return (-1);
			i++;
			}
	return (0);
	}
	return 0;
	
}
