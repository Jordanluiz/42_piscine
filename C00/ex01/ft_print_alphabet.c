/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilguei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 20:55:59 by jfilguei          #+#    #+#             */
/*   Updated: 2023/03/08 21:03:44 by jfilguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{	
	char	letter;

	letter = 'a';
	while (letter <= 'z')
	{	
		write (1, &letter, 1);
		letter++;
	}
}
