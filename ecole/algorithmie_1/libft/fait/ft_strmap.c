/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmancero <jmancero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 09:30:27 by jmancero          #+#    #+#             */
/*   Updated: 2013/11/24 09:42:34 by jmancero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../reverifier/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int i;
	char *str;

	i = 0;
	str = ft_strnew(ft_strlen((char *)s) + 1);
	if (s)
	{
		while (s[i] != '\0')
		{
			str[i] = f(s[i]);
			i++;
		}
		str[i + 1] = '\0'; 
		return (str);
	}
}
