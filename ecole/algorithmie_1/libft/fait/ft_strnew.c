/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmancero <jmancero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 23:36:27 by jmancero          #+#    #+#             */
/*   Updated: 2013/11/23 23:51:09 by jmancero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include "../reverifier/libft.h"

char *ft_strnew(size_t size)
{
	char *str;

	if (size > 1)
	{
		str = ft_memalloc(size + 1);
		if (str)
		{
			ft_bzero(str, size + 1);
			return (str);
		}
	}
	return (NULL);
}
