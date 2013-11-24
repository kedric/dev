/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmancero <jmancero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 09:57:32 by jmancero          #+#    #+#             */
/*   Updated: 2013/11/24 10:06:30 by jmancero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../reverifier/libft.h" 

char *ft_strmapi(char const *s, char (*f)(unsigned i, char))
{
	int i;
	char *str;

	i = 0;
	if (s)
	{
		str = ft_memalloc(ft_strlen((char *)s) + 1);
		if (str)
		{
			while (s[i] != '\0')
			{
				str[i] = f(i, s[i]);
				i++;
			}
			return (str);
		}
	}
	return (NULL);
}
