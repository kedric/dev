/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmancero <jmancero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 12:08:04 by jmancero          #+#    #+#             */
/*   Updated: 2013/11/22 14:55:38 by jmancero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

int		ft_strcmp(const char *s1,const char *s2)
{
	int	i;
	int	value_s1;
	int	value_s2;

	i = 0;
	value_s1 = 0;
	value_s2 = 0;

	while(s1[i] == s2[i] && s2[i] != '\0' )
	{
		i++;
	}
	if (s2[i] == '\0')
	{
		return (0);
	}
	else
	{
	return (s1[i] - s2[i]);
	}
}
