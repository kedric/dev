/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmancero <jmancero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 12:13:02 by jmancero          #+#    #+#             */
/*   Updated: 2013/11/20 14:50:36 by jmancero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

char	*ft_strcpy(char *s1, const char *s2)
{
	int	i;

	i = 0;

	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}

	s1[i] = '\0';

	return (s1);
}
