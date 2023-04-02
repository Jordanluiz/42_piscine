/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilguei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 00:02:57 by jfilguei          #+#    #+#             */
/*   Updated: 2023/03/12 00:03:02 by jfilguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	aux1;
	int	aux2;

	aux1 = 0;
	aux2 = 1;
	while (aux1 < size)
	{
		while (aux2 < size)
		{
			if (tab[aux1] > tab[aux2])
				ft_swap(&tab[aux1], &tab[aux2]);
			aux2++;
		}
		aux1++;
		aux2 = aux1 + 1;
	}
}
