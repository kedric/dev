/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmancero <jmancero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 21:39:28 by jmancero          #+#    #+#             */
/*   Updated: 2013/11/24 19:49:12 by jmancero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *str;

	str = s;
	while(n-- > 0)
	{
		if (*str == c)
			return((void *)str);
		str++;
	}
	return (NULL);
}
