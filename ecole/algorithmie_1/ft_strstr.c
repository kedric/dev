/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmancero <jmancero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 12:13:51 by jmancero          #+#    #+#             */
/*   Updated: 2013/11/20 16:56:31 by jmancero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int		ft_verif(const char *str, const char *to_find)
{
	int i = 0;

	while(str[i] == to_find[i])
	{
		i++;
	}
	if (to_find[i] == '\0')
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}

char	*ft_strstr(const char *s1,const char *s2)
{
	int	i;
	int	match;
	int r;
	char *result;

	i = 0;
	r = 0;
	match = 0;
	result = s1

	while(s1[i] != '\0' && match != 1 || match != 1)
	{
		if (s1[i] == s2[0])
		{
			match = ft_verif(s1 + i, s2);
		}
		if(match != 1)
		{
			i++;
		}
	}
	if (match == 1)
	{
		while(s1[i] != '\0')
		{
			result[r] = s1[i];
			r++;
		}
		return result;
	}
	else 
	{
		return (0);
	}
}
