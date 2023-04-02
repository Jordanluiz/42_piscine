/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verification2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 21:00:56 by gabrodri          #+#    #+#             */
/*   Updated: 2023/03/28 21:00:58 by gabrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/bsq.h"

int	ft_get_next_line2(char *argv, int fd)
{
	char	*buf;
	int		j;
	int		size_file;

	j = 0;
	size_file = ft_size_file(argv);
	buf = malloc(size_file * sizeof(char));
	if (buf == NULL)
		return (0);
	while (read(fd, &buf[j], 1))
	{
		if (buf[j] == '\n')
		{
			break ;
		}
		j++;
	}
	free (buf);
	return (j + 1);
}

int	ft_verif_columns2(char *argv)
{
	int	i;
	int	fd;
	int	j;
	int	c;
	int	l;

	i = 0;
	j = 0;
	c = col_nbr(argv);
	l = row_nbr(argv);
	fd = open(argv, O_RDONLY);
	ft_get_second_line(fd);
	while (i < l)
	{
		j = ft_get_next_line2(argv, fd);
		if (j != c)
			return (1);
		i++;
	}
	if (ft_get_next_line2(argv, fd) > 1)
		return (1);
	close(fd);
	return (0);
}

int	ft_verif_map2(char *argv)
{
	if (get_void(argv) == get_obst(argv) || get_void(argv) == get_full(argv)
		|| get_obst(argv) == get_full(argv))
	{
		ft_putstr("map error\n");
		return (1);
	}
	if (col_nbr(argv) < 1 || row_nbr(argv) < 1)
	{
		ft_putstr("map error\n");
		return (1);
	}
	if (ft_verif_chars(argv) == 1 || ft_verif_returns(argv) == 1)
	{
		ft_putstr("map error\n");
		return (1);
	}
	if (ft_verif_columns2(argv) == 1)
	{
		ft_putstr("map error\n");
		return (1);
	}
	return (0);
}
