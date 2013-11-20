/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmancero <jmancero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 12:09:35 by jmancero          #+#    #+#             */
/*   Updated: 2013/11/20 14:59:09 by jmancero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

char	*ft_strncpy(char *dest, char *src, size_t n)
{
	unsigned int	i;

	i = 0;

	while( src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while(i <= n)
	{
		dest[i] = '\0';
		i++;
	}
	return dest;
}
