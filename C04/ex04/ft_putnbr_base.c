/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilguei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 19:21:18 by jfilguei          #+#    #+#             */
/*   Updated: 2023/03/20 19:21:21 by jfilguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	is_invalid(char *base)
{
	int	i;
	int	k;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		k = i + 1;
		while (base[k] != '\0')
		{
			if (base[k] == base[i])
				return (1);
			k++;
		}
		i++;
	}
	return (i <= 1);
}

void	ft_putnbr_base_recursive(long int nbr, char *base)
{
	int	base_size;

	base_size = ft_strlen(base);
	if (nbr < base_size)
		write(1, &base[nbr], 1);
	else
	{
		ft_putnbr_base_recursive(nbr / base_size, base);
		write(1, &base[nbr % base_size], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	n;

	n = nbr;
	if (is_invalid(base))
		return ;
	if (n < 0)
	{
		n = -n;
		write(1, "-", 1);
	}
	ft_putnbr_base_recursive(n, base);
}
