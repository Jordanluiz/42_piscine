/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilguei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:19:20 by jfilguei          #+#    #+#             */
/*   Updated: 2023/03/09 19:50:10 by jfilguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_number(int digits[], int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(digits[i] + '0');
		i++;
	}
	if (digits[0] != 9 - n + 1)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn_vector(int pos, int digits[], int n, int prev)
{
	int	i;

	if (pos != n)
	{
		i = prev + 1;
		while (i <= 9)
		{
			digits[pos] = i;
			ft_print_combn_vector(pos + 1, digits, n, digits[pos]);
			if (pos == n - 1)
			{
				print_number(digits, n);
			}
			i++;
		}
	}
}

void	ft_print_combn(int n)
{
	int	digits[10];

	ft_print_combn_vector(0, digits, n, -1);
}
