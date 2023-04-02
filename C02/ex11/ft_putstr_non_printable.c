/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilguei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 15:47:11 by jfilguei          #+#    #+#             */
/*   Updated: 2023/03/12 15:47:15 by jfilguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(unsigned char c)
{
	write(1, &c, 1);
}

int	is_non_printable(unsigned char c)
{
	return (c < 32 || c > 126);
}

void	print_hex(unsigned char c)
{
	char	*hexbase;

	hexbase = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hexbase[c / 16]);
	ft_putchar(hexbase[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_non_printable(str[i]))
			print_hex(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}

/*
#include <unistd.h>
#include <stdio.h>

int main(){
	char string[] = "Ola\nesta bem?";
	
	ft_putstr_non_printable(string);
	return 0;
} 
*/
