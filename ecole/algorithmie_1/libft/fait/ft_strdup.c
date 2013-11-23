/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmancero <jmancero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 11:01:55 by jmancero          #+#    #+#             */
/*   Updated: 2013/11/23 11:10:05 by jmancero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdlib.h>
 
char *ft_strdup(const char*s1)
{
	int i;
	int len;
	char *str;
	
	i = 0;
	if (s1)
	{
		len = ft_strlen(s1);
		str = (char *)malloc(len * sizeof(char));

		while (s1[i] != '\0')
		{
			str[i] = s1[i];
			i++;
		}
		return (str);
	}
	return (NULL);
}
