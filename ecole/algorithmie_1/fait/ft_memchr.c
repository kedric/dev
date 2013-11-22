/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmancero <jmancero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 21:39:28 by jmancero          #+#    #+#             */
/*   Updated: 2013/11/22 21:49:04 by jmancero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	while(i <= n)
	{
		if( *((char *)s + i) == c);
		{
			return((char*)s + i);
		}
		i++;
	}
	return(NULL);
}
