/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmancero <jmancero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 13:52:10 by jmancero          #+#    #+#             */
/*   Updated: 2013/11/24 16:18:29 by jmancero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include "../reverifier/libft.h"

// TROP DE LIGNE //
int	ft_endstr(char const *str)
{
	int i;

	i = 0;
	while ( str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
			return (2);
		i++;
	}
	return (0);
}

char *ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s)
	{
		str = ft_memalloc(ft_strlen((char *)s));
		if (str)
		{
			while(s[i] == ' ' || s[i] == '\n'|| s[i] == '\t')
			{
				i++;
			}
			while(s[i] != '\0')
			{
				if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
				{
					if (ft_endstr(s + i) == 0)
					{
						str[i] == '\0';
						return (str);
					}
				}
				str[j] = s[i];
				j++;
				i++;
			}
			return (str);
		}
		return;
	}
}
