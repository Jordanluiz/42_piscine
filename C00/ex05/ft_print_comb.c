/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilguei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:03:25 by jfilguei          #+#    #+#             */
/*   Updated: 2023/03/09 16:03:38 by jfilguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_three_numbers(char first, char second, char third)
{
	ft_putchar(first);
	ft_putchar(second);
	ft_putchar(third);
	if (first != '7' | second != '8' | third != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	first;
	char	second;
	char	third;

	first = '0';
	second = '0';
	third = '0';
	while (first <= '9')
	{
		second = first + 1;
		while (second <= '9')
		{
			third = second + 1;
			while (third <= '9')
			{
				print_three_numbers(first, second, third);
				third++;
			}
			second++;
		}
		first++;
	}
}
