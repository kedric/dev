/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmancero <jmancero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 08:45:22 by jmancero          #+#    #+#             */
/*   Updated: 2013/11/24 09:28:43 by jmancero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_striter(char *s, void (*f)(char *))
{
	int i;

	i = 0;
	if(s)
	{
		while(s[i] != '\0')
		{
			f(s + i);
			i++;
		}
	}
}