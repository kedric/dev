/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmancero <jmancero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 12:09:35 by jmancero          #+#    #+#             */
/*   Updated: 2013/11/20 12:10:28 by jmancero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;

	while( src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while(i <= n)
	{
		dest[i] = '\0';
		i++;
	}
	return dest;
}
