/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmancero <jmancero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 19:33:17 by jmancero          #+#    #+#             */
/*   Updated: 2013/11/23 19:51:45 by jmancero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	int i;
	char *mem;

	i = 0;
	mem = (char *)malloc(size * sizeof(char));
	if (mem)
	{
		while (i < size)
		{
			mem[i] = '\0';
			i++;
		}
		return (mem);
	}
	return (NULL);
}
