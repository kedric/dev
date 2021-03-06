/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmancero <jmancero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 21:37:01 by jmancero          #+#    #+#             */
/*   Updated: 2013/11/23 14:12:02 by jmancero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

void *ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (s != 0)
	{
		while(i < n)
		{
			*((char *)s+i) = c; 
			i++;
		}
	}
	return (s);
}
