/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilguei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 15:46:07 by jfilguei          #+#    #+#             */
/*   Updated: 2023/03/12 15:46:11 by jfilguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	ft_strlowcase(char *str)
{
	if (*str >= 'A' && *str <= 'Z')
		*str += 32;
	return (*str);
}

char	ft_strupcase(char *str)
{
	if (*str >= 'a' && *str <= 'z')
		*str -= 32;
	return (*str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	a;
	char	novo;

	i = 0;
	a = '1';
	while (str[i] != '\0')
	{
		if (i == 0)
			novo = ft_strupcase(&str[i]);
		else if (!((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')
				|| (a >= '0' && a <= '9')))
			novo = ft_strupcase(&str[i]);
		else
			novo = ft_strlowcase(&str[i]);
		a = str[i];
		str[i] = novo;
		i++;
	}
	return (str);
}
