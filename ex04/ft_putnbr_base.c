/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:27:57 by mpatrao           #+#    #+#             */
/*   Updated: 2022/07/19 17:27:59 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_nbr_base(int nbr, char *base, int len);

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[i] == '\0' || base[i + 1] == '\0')
		return ;
	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j] || (base[i] == '+' || base[i] == '-'))
				return ;
			j++;
		}
		i++;
	}
	print_nbr_base(nbr, base, i);
}

void	print_nbr_base(int nbr, char *base, int len)
{
	unsigned int	k;
	unsigned int	l;

	l = len;
	k = 1;
	if (nbr < 0)
	{
		write (1, "-", 1);
		k = -nbr;
	}
	else
		k = nbr;
	if (k >= l)
		print_nbr_base(k / l, base, l);
	write (1, &base[k % l], 1);
}
