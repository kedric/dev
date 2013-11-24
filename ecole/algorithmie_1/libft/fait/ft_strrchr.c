/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmancero <jmancero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 14:34:07 by jmancero          #+#    #+#             */
/*   Updated: 2013/11/24 18:50:22 by jmancero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

char *ft_strrchr(const char *s, int c)
{
	int i;

    if (s)
    {
		i = ft_strlen(s);

        while (i >= 0)
        {
            if (s[i] == (char)c)
                return ((char *)s + i);
            i--;
        }
        if (s[i] == (char)c)
            return ((char *)s + i);
    }
    return(0);
}
