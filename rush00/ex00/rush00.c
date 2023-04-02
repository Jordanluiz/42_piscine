/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mestremi <mestremi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 13:42:43 by fde-carv          #+#    #+#             */
/*   Updated: 2023/03/11 21:47:06 by jfilguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	imprime_x(int x, char inicio, char meio, char fim)
{
	int	i;

	i = x;
	ft_putchar(inicio);
	while (x > 2)
	{
		ft_putchar(meio);
		x--;
	}
	if (x > 1)
		ft_putchar(fim);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		imprime_x(x, 'o', '-', 'o');
		while (y > 2)
		{
			imprime_x(x, '|', ' ', '|');
			y--;
		}
		if (y > 1)
			imprime_x(x, 'o', '-', 'o');
	}
	return ;
}
