/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmancero <jmancero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 10:26:56 by jmancero          #+#    #+#             */
/*   Updated: 2013/11/23 10:33:50 by jmancero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int i;

    i = 0;

    while(*((char *)s1 +i) != '\0' || *((char *)s2 + i) != '\0' )
    {
        if (*((char *)s1 + i) > *((char *)s2 + i))
            return (1);
        if (*((char *)s1 + i) < *((char *)s2 + i))
            return (-1);
        i++;
    }
    return (0);
}
