/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilguei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 20:43:11 by jfilguei          #+#    #+#             */
/*   Updated: 2023/03/14 20:43:16 by jfilguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	needle_in_haystack(char *haystack, char *needle)
{
	int	i;

	i = 0;
	while (needle[i] != '\0')
	{
		if (needle[i] != haystack[i])
			return (0);
		i++;
	}	
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
			if (needle_in_haystack(str + i, to_find))
				return (str + i);
		i++;
	}	
	return ((void *)0);
}
