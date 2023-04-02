/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilguei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 23:11:50 by jfilguei          #+#    #+#             */
/*   Updated: 2023/03/11 23:12:11 by jfilguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;	
	int	aux;

	i = 0;
	while (i < (size / 2))
	{
		aux = tab[i];
		tab [i] = tab [size - 1 - i];
		tab [size - 1 - i] = aux;
		i++;
	}
}
