/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 20:01:49 by mpatrao           #+#    #+#             */
/*   Updated: 2022/07/18 20:01:52 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <limits.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == INT_MIN)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb >= 10)
		{	
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else
		{
			ft_putchar(nb + '0');
		}
	}
}
