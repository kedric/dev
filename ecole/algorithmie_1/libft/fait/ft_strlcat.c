/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmancero <jmancero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 12:09:20 by jmancero          #+#    #+#             */
/*   Updated: 2013/11/23 12:15:46 by jmancero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
	if (dst && src)
    {
        int i;
        int dst_len;

        i = 0;
        dst_len = ft_strlen(dst);

        while (src[i] != '\0')
        {
            dst[dst_len] = src[i];
            i++;
            dst_len++;
        }
        dst[dst_len + 1] = '\0';
        return (ft_strlen(dst));
    }
    return (ft_strlen(dst));
}
