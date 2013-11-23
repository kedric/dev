/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmancero <jmancero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 11:45:18 by jmancero          #+#    #+#             */
/*   Updated: 2013/11/23 11:51:31 by jmancero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

char *ft_strncat(char *s1, char *s2, size_t n)
{
	if (s1 && s2 && n > 0)
	{
		size_t i;
		int s1_len;
	
		i = 0;
		s1_len = ft_strlen(s1);
	
		while (s2[i] != '\0' && i < n)
		{
			s1[s1_len] = s2[i];
			i++;
			s1_len++;
		}
		s1[s1_len + 1] = '\0';
		return (s1);
	}
	return (s1);
}
