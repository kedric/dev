/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmancero <jmancero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 13:11:41 by jmancero          #+#    #+#             */
/*   Updated: 2013/11/22 12:15:18 by jmancero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	ft_putnbr(int n)
{
	if(n >= 0)
	{
		if(n >= 10)
		{
			ft_putnbr(n / 10);
			ft_putchar(n % 10 + '0');
		}
		else
		{
			ft_putchar('0' + n);
		}
	}
	else
	{
		ft_putchar('-');
		ft_putnbr(-n);
	}
}
