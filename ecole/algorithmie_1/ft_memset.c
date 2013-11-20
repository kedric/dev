/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmancero <jmancero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 21:37:01 by jmancero          #+#    #+#             */
/*   Updated: 2013/11/20 22:29:41 by jmancero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

void *ft_memset(void *s, int c, size_t n)
{
	int	i;
	char *str;

		puts("salut");
	str = s;
	while(i <= n)
	{
		str[i] = c; 
		i++;
	}
	return (s);
}
