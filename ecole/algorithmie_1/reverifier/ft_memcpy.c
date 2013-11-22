/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmancero <jmancero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 09:02:50 by jmancero          #+#    #+#             */
/*   Updated: 2013/11/22 15:46:25 by jmancero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    int i;

	i = 0;
	if(src)
	{
		while(i < n)
		{
			*((char *)dest+i) = *((char *)src+i);
			i++;
		}
		
		return (dest);
	}
	else 
		return (0);
}
