/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfilguei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 19:21:44 by jfilguei          #+#    #+#             */
/*   Updated: 2023/03/20 19:21:51 by jfilguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_space(char c)
{
	return (c == ' ' || c == '\f'
		|| c == '\n' || c == '\r'
		|| c == '\t' || c == '\v');
}

int	get_base_symbol(char digit, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == digit)
			return (i);
		i++;
	}
	return (-1);
}

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
	k = 0;
	while (base[i] != '\0')
	{
		k = i + 1;
		while (base[k] != '\0')
		{
			if (base[i] == base[k])
				return (1);
			k++;
		}
		if (base[i] == '+' || base[i] == '-' || ft_is_space(base[i]))
			return (1);
		i++;
	}
	return (i <= 1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	number;
	int	base_size;
	int	sign;

	i = 0;
	number = 0;
	base_size = ft_strlen(base);
	sign = 1;
	if (is_invalid(base))
		return (0);
	while (ft_is_space(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign *= -1;
	while (get_base_symbol(str[i], base) != -1 && str[i] != '\0')
		number = base_size * number + get_base_symbol(str[i++], base);
	return (number * sign);
}
