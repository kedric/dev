/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmancero <jmancero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 12:09:20 by jmancero          #+#    #+#             */
/*   Updated: 2013/11/24 17:38:04 by jmancero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
        int i;
        int dst_len;
		int total;

	if (dst && src)
    {
        i = 0;
        dst_len = ft_strlen(dst);
		total = dst_len + ft_strlen(src);
		if( dst_len < size && size > 0)
		{
			while (src[i] != '\0' && i < size - 1)
			{
				dst[dst_len] = src[i];
				i++;
				dst_len++;
			}
			dst[size - 1] = '\0';
			return (total);
		}
	}
	return (total);
}
