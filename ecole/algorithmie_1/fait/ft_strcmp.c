/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmancero <jmancero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 12:08:04 by jmancero          #+#    #+#             */
/*   Updated: 2013/11/20 13:04:48 by jmancero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int		ft_strcmp(const char *s1,const char *s2)
{
	int	i;
	int	value_s1;
	int	value_s2;

	i = 0;
	value_s1 = 0;
	value_s2 = 0;

	while(s1[i] != '\0')
	{
		value_s1 = value_s1 + s1[i];
		i++;
	}
	i = 0;
	while(s2[i] != '\0')
	{
		value_s2 = value_s2 + s2[i];
		i++;
	}
	return value_s1 - value_s2;
}
