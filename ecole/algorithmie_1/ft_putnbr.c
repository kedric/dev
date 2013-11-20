/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmancero <jmancero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 13:11:41 by jmancero          #+#    #+#             */
/*   Updated: 2013/11/20 13:12:19 by jmancero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	ft_putnbr(int i)
{
	if(i >= 0)
	{
		if(i >= 10)
		{
			ft_putnbr(i / 10);
			ft_putchar(i % 10 + '0');
		}
		else
		{
			ft_putchar('0' + i);
		}
	}
	else
	{
		ft_putchar('-');
		ft_putnbr(-i);
	}
}
